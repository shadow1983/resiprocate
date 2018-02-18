include_directories(../..)

function(TEST)
   test_base(${ARGV})
   if(CMAKE_HOST_WIN32)
      TARGET_LINK_LIBRARIES(${ARGV0} rutil resiprocate dum)
   else()
      TARGET_LINK_LIBRARIES(${ARGV0} rutil resip dum ${POPT_LIBRARIES})
   endif()
   set_target_properties(${ARGV0} PROPERTIES FOLDER resip/Tests)   
endfunction()

# TODO: A lot of files still depend on config.h, have CMake generate it if
# still needed
# TODO: Only enable tests that are already enabled by default... Some are not even compiling

set(SHARED_SRC
   CommandLineParser.cxx
   RegEventClient.cxx
   UserAgent.cxx
   basicClientCall.cxx
   basicClientCmdLineParser.cxx
   basicClientUserAgent.cxx
)

#basicPublication.cxx
#testSMIMEInvite.cxx
#treg.cxx
#rlsListGenerator.cxx
#unreg.cxx
#rlsServer.cxx
#testRedirectManager.cxx
#testDSI.cxx
#testPayloadEncrypter.cxx
#certServer.cxx
#limpc.cxx
#curlHttp/testCurlHttpProvider.cxx
#curlHttp/CurlHttpProvider.cxx
#testSecurity.cxx
#testSMIMEMessage.cxx
#test3pcc.cxx
#testDumTimer.cxx
#testIdentity.cxx

test(BasicCall BasicCall.cxx ${SHARED_SRC})
test(basicRegister basicRegister.cxx ${SHARED_SRC})
test(basicMessage basicMessage.cxx ${SHARED_SRC})
test(basicClient basicClient.cxx ${SHARED_SRC})
test(testRequestValidationHandler testRequestValidationHandler.cxx ${SHARED_SRC})

