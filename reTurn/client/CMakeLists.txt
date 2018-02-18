# TODO: Do we need to install libreTurnClient?
set(INCLUDES
   ../AsyncSocketBase.hxx
   ../AsyncTcpSocketBase.hxx
   ../AsyncTlsSocketBase.hxx
   ../AsyncUdpSocketBase.hxx
   ../ChannelManager.hxx
   ../DataBuffer.hxx
   ../RemotePeer.hxx
   ../ReTurnSubsystem.hxx
   ../StunMessage.hxx
   ../StunTuple.hxx
   ErrorCode.hxx
   TurnAsyncSocket.hxx
   TurnAsyncSocketHandler.hxx
   TurnAsyncTcpSocket.hxx
   TurnAsyncTlsSocket.hxx
   TurnAsyncUdpSocket.hxx
   TurnSocket.hxx
   TurnTcpSocket.hxx
   TurnTlsSocket.hxx
   TurnUdpSocket.hxx
)

set(SOURCES
   ../AsyncSocketBase.cxx
   ../AsyncTcpSocketBase.cxx
   ../AsyncTlsSocketBase.cxx
   ../AsyncUdpSocketBase.cxx
   ../ChannelManager.cxx
   ../DataBuffer.cxx
   ../RemotePeer.cxx
   ../ReTurnSubsystem.cxx
   ../StunMessage.cxx
   ../StunTuple.cxx
   TurnAsyncSocket.cxx
   TurnAsyncSocketHandler.cxx
   TurnAsyncTcpSocket.cxx
   TurnAsyncTlsSocket.cxx
   TurnAsyncUdpSocket.cxx
   TurnSocket.cxx
   TurnTcpSocket.cxx
   TurnTlsSocket.cxx
   TurnUdpSocket.cxx
)

include_directories(..)

set(TARGET_LIBS ${OPENSSL_LIBRARIES} rutil)

if(CMAKE_HOST_WIN32)
   # Static library on Windows
   set(TARGET_TYPE "")
   #LIST(APPEND TARGET_LIBS winmm)
else()
   # Shared library on Unix
   set(TARGET_TYPE SHARED)
   
   #IF(CMAKE_SYSTEM_NAME STREQUAL "Linux")
   #   LIST(APPEND TARGET_LIBS rt)
   #ENDIF()
endif()

add_library(reTurnClient ${TARGET_TYPE} ${SOURCES} ${INCLUDES})
target_link_libraries(reTurnClient ${TARGET_LIBS})
set_target_properties(reTurnClient PROPERTIES FOLDER reTurn)

add_subdirectory(test)
