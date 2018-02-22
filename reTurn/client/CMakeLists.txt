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

add_library(reTurnClient ${TARGET_TYPE} ${SOURCES} ${INCLUDES})
target_link_libraries(reTurnClient ${OPENSSL_LIBRARIES} rutil)
set_target_properties(reTurnClient PROPERTIES FOLDER reTurn)

add_subdirectory(test)
