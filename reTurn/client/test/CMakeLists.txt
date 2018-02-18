include_directories(../..)

function(TEST)
   test_base(${ARGV})
   set_target_properties(${ARGV0} PROPERTIES FOLDER reTurn/client/Tests)
   target_link_libraries(${ARGV0} reTurnClient rutil ${OPENSSL_LIBRARIES})
endfunction()


test(TestAsyncClient TestAsyncClient.cxx)
test(TestRtpLoad TestRtpLoad.cxx)
test(TestClient TestClient.cxx)
