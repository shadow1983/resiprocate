# Used for installation
set(INCLUDES
   ErrorCode.hxx
   FakeSelectSocketDescriptor.hxx
   Flow.hxx
   FlowDtlsSocketContext.hxx
   FlowDtlsTimerContext.hxx
   FlowManager.hxx
   FlowManagerException.hxx
   FlowManagerSubsystem.hxx
   MediaStream.hxx
)

# Special case because DTLS files are under "dtls_wrapper"
set(INCLUDES_DTLS_FOLDER
   dtls_wrapper/bf_dwrap.h
   dtls_wrapper/DtlsFactory.hxx
   dtls_wrapper/DtlsSocket.hxx
   dtls_wrapper/DtlsTimer.hxx
)

# Used for compilation
set(SOURCES
   FakeSelectSocketDescriptor.cxx
   Flow.cxx
   FlowDtlsSocketContext.cxx
   FlowDtlsTimerContext.cxx
   FlowManager.cxx
   FlowManagerSubsystem.cxx
   MediaStream.cxx
   dtls_wrapper/bf_dwrap.c
   dtls_wrapper/DtlsFactory.cxx
   dtls_wrapper/DtlsSocket.cxx
   dtls_wrapper/DtlsTimer.cxx
)

list(APPEND INCLUDES ${INCLUDES_DTLS_FOLDER})

include_directories(..)
include_directories(dtls_wrapper)

set(TARGET_LIBS rutil reTurnClient ${SRTP_LIBRARIES})
#set(TARGET_LIBS reTurn ${OPENSSL_LIBRARIES} ${ARES_LIBRARIES})

if(CMAKE_HOST_WIN32)
   # Static library on Windows
   SET(TARGET_TYPE "")

#   LIST(APPEND TARGET_LIBS winmm)
else()
   # Shared library on Unix
   set(TARGET_TYPE SHARED)
   
   if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
#      LIST(APPEND TARGET_LIBS rt)
   endif()
endif()

add_library(reflow ${TARGET_TYPE} ${SOURCES} ${INCLUDES})
target_link_libraries(reflow ${TARGET_LIBS})
set_target_properties(reflow PROPERTIES FOLDER reflow)

install(TARGETS reflow DESTINATION lib)
install(FILES ${INCLUDES} DESTINATION include/reflow)
install(FILES ${INCLUDES_DTLS_FOLDER} DESTINATION include/reflow/dtls_wrapper)

add_subdirectory(dtls_wrapper/test)
