# TODO - Do we need to actually install these files since reTurn is not a
# library?
set(INCLUDES
   AsyncSocketBase.hxx
   AsyncSocketBaseHandler.hxx
   AsyncTcpSocketBase.hxx
   AsyncTlsSocketBase.hxx
   AsyncUdpSocketBase.hxx
   ChannelManager.hxx
   ConnectionManager.hxx
   DataBuffer.hxx
   ReTurnConfig.hxx
   ReTurnSubsystem.hxx
   RemotePeer.hxx
   RequestHandler.hxx
   StunAuth.hxx
   StunMessage.hxx
   StunTuple.hxx
   TcpConnection.hxx
   TcpServer.hxx
   TlsConnection.hxx
   TlsServer.hxx
   TurnAllocation.hxx
   TurnAllocationKey.hxx
   TurnAllocationManager.hxx
   TurnManager.hxx
   TurnPermission.hxx
   UdpRelayServer.hxx
   UdpServer.hxx
   UserAuthData.hxx
   reTurnServer.hxx
)

set(SOURCES
   AsyncSocketBase.cxx
   AsyncTcpSocketBase.cxx
   AsyncTlsSocketBase.cxx
   AsyncUdpSocketBase.cxx
   ChannelManager.cxx
   ConnectionManager.cxx
   DataBuffer.cxx
   ReTurnConfig.cxx
   ReTurnSubsystem.cxx
   RemotePeer.cxx
   RequestHandler.cxx
   StunAuth.cxx
   StunMessage.cxx
   StunTuple.cxx
   TcpConnection.cxx
   TcpServer.cxx
   TlsConnection.cxx
   TlsServer.cxx
   TurnAllocation.cxx
   TurnAllocationKey.cxx
   TurnAllocationManager.cxx
   TurnManager.cxx
   TurnPermission.cxx
   UdpRelayServer.cxx
   UdpServer.cxx
   UserAuthData.cxx
   reTurnServer.cxx
)

add_executable(reTurnServer ${SOURCES} ${INCLUDES})
target_include_directories(reTurnServer PRIVATE ${PROJECT_SOURCE_DIR})
target_link_libraries(reTurnServer ${OPENSSL_LIBRARIES} rutil)
set_target_properties(reTurnServer PROPERTIES FOLDER reTurn)

install(TARGETS reTurnServer DESTINATION ${CMAKE_INSTALL_BINDIR})

add_subdirectory(client)
add_subdirectory(test)
