cmake_minimum_required(VERSION 3.5 FATAL_ERROR)


if(POLICY CMP0042)
  CMAKE_POLICY(SET CMP0042 NEW)
endif(POLICY CMP0042)

project(reSIProcate VERSION 1.11.0)
set(CMAKE_CXX_STANDARD 14)

include (conanbuildinfo.cmake)
conan_basic_setup(TARGETS)


include(GNUInstallDirs)

enable_testing()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/build/cmake_modules/")

# TODO: Add doxygen support

# TODO: Add version numbers to generated targets (e.g. libresip-1.9.so)

# Top-level user-settable variables (with defaults)
# Those can be queried from the command line using "cmake -LH" and can be
# specified on the command line, using cmake-gui or ccmake.
option(WITH_SSL "Link against SSL libraries" TRUE)
option(WITH_C_ARES "Link against libc-ares (rather than rutil/dns/ares)" FALSE)
option(BUILD_SHARED_LIBS "Build libraries as shared" TRUE)

####################
### Dependencies ###
####################

# OpenSSL
if(WITH_SSL)
   # SSL support is requested, so make it mandatory when calling find_package
   find_package(OpenSSL REQUIRED)
   if(OPENSSL_FOUND)
      set(USE_SSL true)
      add_definitions(-DUSE_SSL)
      include_directories(${OPENSSL_INCLUDE_DIR})
   else()
      message(FATAL_ERROR "Could not find OpenSSL")
   endif()
else()
   # Explicitly set OPENSSL_FOUND to false since we didn't even run
   # find_package on it. It needs to be set to false for other CMake scripts to
   # no it is not being used.
   set(OPENSSL_FOUND "FALSE")
endif()

# ares
if(WITH_C_ARES)
   # Don't use built-in ares
   find_package(cares REQUIRED)

   set(USE_CARES true)
   add_definitions(-DUSE_CARES)

   set(ARES_LIBRARIES ${CARES_LIBRARIES})
   include_directories(${CARES_INCLUDE_DIRS})
else()
   # Use built-in ares
   set(USE_ARES true)
   add_definitions(-DUSE_ARES)

   # Put the resip ares include dir before the system ones to not conflict with
   # c-ares if also present.
   include_directories(BEFORE rutil/dns/ares)
   
   set(ARES_LIBRARIES resipares)
endif()

# popt
find_package(popt)
IF(POPT_FOUND)
   set(HAVE_POPT_H true)
   add_definitions(-DHAVE_POPT_H)
   include_directories(${POPT_INCLUDE_DIRS})
else()
   set(POPT_LIBRARIES "")
endif()

# ASIO
find_package(ASIO)
if(ASIO_FOUND)
   include_directories(${ASIO_INCLUDE_DIRS})
endif()

# Boost.Asio
# TODO: Is using Boost's asio OK? Or should it use the old/independant asio
# libs?
find_package(Boost)
if(${Boost_FOUND})
   include_directories(${Boost_INCLUDE_DIRS})
endif()

# SRTP
find_package(srtp)
if(${SRTP_FOUND})
   include_directories(${SRTP_INCLUDE_DIRS})
endif()

# Python
#INCLUDE(FindPythonLibs)

# Cajun
find_package(cajun)
if(${CAJUN_FOUND})
   include_directories(${CAJUN_INCLUDE_DIRS})
endif()

# BerkeleyDb
find_package(BerkeleyDb)
if(${BERKELEYDB_FOUND})
   include_directories(${BERKELEYDB_INCLUDE_DIRS})
   set(DB_HEADER "db_cxx.h")
endif()

# epoll
include(CheckIncludeFiles)
check_include_files(sys/epoll.h HAVE_EPOLL)

# monotonic clock
include(CheckCSourceRuns)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
   set(CMAKE_REQUIRED_LIBRARIES rt)
endif()

check_c_source_runs("
   #include <time.h>
   int main() {
      struct timespec ts;
      clock_gettime(CLOCK_MONOTONIC, &ts);
      return 0;
   }" HAVE_CLOCK_GETTIME_MONOTONIC)

if(HAVE_CLOCK_GETTIME_MONOTONIC})
   add_definitions(-DHAVE_CLOCK_GETTIME_MONOTONIC)
endif()

# shared library versioning

set(SO_RELEASE "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}")

##############################
### Generation of config.h ###
##############################
# TODO - Bring more values from autotools
add_definitions(-DHAVE_CONFIG_H)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.h)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# This helper is used by the unit tests
function(TEST_BASE target)
   add_executable(${target} ${ARGN})
   add_test(NAME ${target} COMMAND $<TARGET_FILE:${target}>)
endfunction(TEST_BASE)

# Used to group targets together when CMake generates projects for IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(rutil)
add_subdirectory(resip)

# CMake repro support is still in the works...
if(CAJUN_FOUND)
# TODO: repro
#   add_subdirectory(repro)
else()
   message(STATUS "Missing cajun, will not build repro")
endif()

if(OPENSSL_FOUND AND ASIO_FOUND AND Boost_FOUND)
   add_subdirectory(reTurn)
else()
   message(STATUS "Missing libraries, will not build reTurn")
endif()

if(OPENSSL_FOUND AND ASIO_FOUND AND Boost_FOUND AND SRTP_FOUND)
   add_subdirectory(reflow)
else()
   message(STATUS "Missing libraries, will not build reFlow")
endif()

###############
### Summary ###
###############

include(FeatureSummary)
feature_summary(WHAT ALL)
