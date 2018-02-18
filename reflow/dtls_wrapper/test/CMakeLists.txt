include_directories(../..)

function(TEST)
   test_base(${ARGV})
   set_target_properties(${ARGV0} PROPERTIES FOLDER reflow/Tests)
   target_link_libraries(${ARGV0} reflow rutil ${OPENSSL_LIBRARIES} ${SRTP_LIBRARIES})
endfunction()

set(SHARED_SRC
   CreateCert.cxx
   TestDtlsUdp.cxx
   TestTimerContext.cxx
)

test(testDtlsWrapper testDtlsWrapper.cxx ${SHARED_SRC})
test(testDtlsClient testDtlsClient.cxx ${SHARED_SRC})
test(testDtlsServer testDtlsServer.cxx ${SHARED_SRC})
