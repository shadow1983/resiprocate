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

add_library(reflow ${SOURCES} ${INCLUDES})
target_link_libraries(reflow rutil reTurnClient ${SRTP_LIBRARIES})
set_target_properties(reflow PROPERTIES FOLDER reflow)

install(TARGETS reflow DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES ${INCLUDES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/reflow)
install(FILES ${INCLUDES_DTLS_FOLDER} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/reflow/dtls_wrapper)

add_subdirectory(dtls_wrapper/test)
