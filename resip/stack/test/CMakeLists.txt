include_directories(../..)

function(TEST)
   test_base(${ARGV})
   if(CMAKE_HOST_WIN32)
      target_link_libraries(${ARGV0} rutil resiprocate)
   else()
      target_link_libraries(${ARGV0} rutil resip ${POPT_LIBRARIES})
   endif()
   set_target_properties(${ARGV0} PROPERTIES FOLDER resip/Tests)   
endfunction()

# TODO: libpopt
# TODO: Python
# TODO: A lot of files still depend on config.h, have CMake generate it if
# still needed
# TODO: Only enable tests that are already enabled by default... Some are not even compiling

#test(testClient testClient.cxx InviteClient.cxx Resolver.cxx)
test(testParserCategories testParserCategories.cxx)
test(testAor testAor.cxx)
test(testCorruption testCorruption.cxx)
test(testDns testDns.cxx)
#test(testDnsCache testDnsCache.cxx)
#test(testDnsStub testDnsStub.cxx)
test(testAppTimer testAppTimer.cxx)
test(testApplicationSip testApplicationSip.cxx TestSupport.cxx)
test(testConnectionBase testConnectionBase.cxx TestSupport.cxx)
test(testDigestAuthentication testDigestAuthentication.cxx TestSupport.cxx)
test(testEmptyHeader testEmptyHeader.cxx TestSupport.cxx)
test(testMultipartMixedContents testMultipartMixedContents.cxx TestSupport.cxx)
test(testMultipartRelated testMultipartRelated.cxx TestSupport.cxx)
test(testPksc7 testPksc7.cxx TestSupport.cxx)
test(testRlmi testRlmi.cxx TestSupport.cxx)
test(testSdp testSdp.cxx TestSupport.cxx)
test(testSipFrag testSipFrag.cxx TestSupport.cxx)
test(testSipMessage testSipMessage.cxx TestSupport.cxx)
test(testSipMessageEncode testSipMessageEncode.cxx)
test(testSipMessageMemory testSipMessageMemory.cxx TestSupport.cxx)
test(testTransactionFSM testTransactionFSM.cxx TestSupport.cxx)
test(testUri testUri.cxx TestSupport.cxx)
test(testUdp testUdp.cxx)
test(testEmbedded testEmbedded.cxx)
test(test503Generator test503Generator.cxx)
#test(testBlast testBlast.cxx)
test(testClient testClient.cxx)
test(testConvertRaw testConvertRaw.cxx)
#test(testDigestAuthentication2 testDigestAuthentication2.cxx)
test(testDtlsTransport testDtlsTransport.cxx)
test(testEmptyHfv testEmptyHfv.cxx)
test(testExternalBodyContents testExternalBodyContents.cxx TestSupport.cxx)
test(testExternalLogger testExternalLogger.cxx)
#test(testForce testForce.cxx)
#test(testGperfHash testGperfHash.cxx)
#test(testHack testHack.cxx)
test(testHash testHash.cxx)
#test(testHashCasen testHashCasen.cxx)
#test(testHeaderFieldValueList testHeaderFieldValueList.cxx)
test(testIM testIM.cxx)
#test(testId testId.cxx)
test(testIdentity testIdentity.cxx TestSupport.cxx)
test(testLockStep testLockStep.cxx)
test(testMessageWaiting testMessageWaiting.cxx)
#test(testMsgHeaderDiagram testMsgHeaderDiagram.cxx)
#test(testNameAddrParamExclusions testNameAddrParamExclusions.cxx)
#test(testNonInviteClientTx testNonInviteClientTx.cxx)
#test(testNonInviteServerTx testNonInviteServerTx.cxx)
test(testParseNameAddr testParseNameAddr.cxx)
#test(testParseUtil testParseUtil.cxx)
test(testPidf testPidf.cxx)
test(testPlainContents testPlainContents.cxx)
test(testRSP-2 testRSP-2.cxx)
test(testResponses testResponses.cxx)
test(testSelect testSelect.cxx)
test(testSelectInterruptor testSelectInterruptor.cxx)
test(testServer testServer.cxx)
test(testSipStack1 testSipStack1.cxx)
#test(testSipStackInvite testSipStackInvite.cxx)
#test(testSource testSource.cxx)
test(testStack testStack.cxx)
#test(testStun testStun.cxx)
test(testTcp testTcp.cxx)
test(testTime testTime.cxx)
test(testTimer testTimer.cxx)
test(testTls testTls.cxx)
#test(testTlsConnection testTlsConnection.cxx)
#test(testTransportSelector testTransportSelector.cxx)
test(testTuple testTuple.cxx)
test(testTypedef testTypedef.cxx)
#test(testTypes testTypes.cxx)
test(testWsCookieContext testWsCookieContext.cxx)

if(OPENSSL_FOUND)
   test(testSMIME testSMIME.cxx)
   test(testSecurity testSecurity.cxx)
   test(testSocketFunc testSocketFunc.cxx)
   
   if(CMAKE_HOST_APPLE)
      test(testMacSecurity testMacSecurity.cxx)
   endif()
endif()

#InviteClient.cxx
#InviteServer.cxx
#RFC4475TortureTests.cxx
#Register.cxx
#Registrar.cxx
#Resolver.cxx
#SipTortureTests.cxx
#TestSupport.cxx
#Transceiver.cxx
#UAS.cxx
#dumpTls.cxx
#lg.cxx
#limpc.cxx
#makeSelfCert.cxx
#md5.cxx
