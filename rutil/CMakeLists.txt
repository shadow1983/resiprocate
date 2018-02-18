# Used for installation
set(INCLUDES
   AbstractFifo.hxx
   AndroidLogger.hxx
   AsyncID.hxx
   AsyncProcessHandler.hxx
   BaseException.hxx
   CircularBuffer.hxx
   Coders.hxx
   Condition.hxx
   ConfigParse.hxx
   CongestionManager.hxx
   ConsumerFifoBuffer.hxx
   CountStream.hxx
   Data.hxx
   DataException.hxx
   DinkyPool.hxx
   DnsUtil.hxx
   FdPoll.hxx
   FdSetIOObserver.hxx
   Fifo.hxx
   FileSystem.hxx
   FiniteFifo.hxx
   GeneralCongestionManager.hxx
   GenericIPAddress.hxx
   GenericTimerQueue.hxx
   HashMap.hxx
   HeapInstanceCounter.hxx
   Inserter.hxx
   IntrusiveListElement.hxx
   KeyValueStore.hxx
   Lock.hxx
   Lockable.hxx
   Log.hxx
   Logger.hxx
   MD5Stream.hxx
   Mutex.hxx
   NetNs.hxx
   ParseBuffer.hxx
   ParseException.hxx
   Poll.hxx
   PoolBase.hxx
   ProducerFifoBuffer.hxx
   RADIUSDigestAuthenticator.hxx
   RWMutex.hxx
   Random.hxx
   RecursiveMutex.hxx
   ResipAssert.h
   SelectInterruptor.hxx
   ServerProcess.hxx
   Sha1.hxx
   SharedCount.hxx
   SharedPtr.hxx
   Socket.hxx
   StlPoolAllocator.hxx
   Subsystem.hxx
   SysLogBuf.hxx
   SysLogStream.hxx
   ThreadIf.hxx
   Time.hxx
   TimeLimitFifo.hxx
   Timer.hxx
   TransportType.hxx
   WinCompat.hxx
   XMLCursor.hxx
   compat.hxx
   resipfaststreams.hxx
   vmd5.hxx
   vthread.hxx

   hep/HepAgent.hxx
   hep/ResipHep.hxx
)

set(INCLUDES_WIN
   WinCompat.hxx
   WinLeakCheck.hxx
)

set(INCLUDES_SSL
)

# Special case because some SSL files are under "ssl"
set(INCLUDES_SSL_FOLDER
   ssl/OpenSSLInit.hxx
   ssl/SHA1Stream.hxx
)

# Special case because some stun files are under "stun"
# TODO: Protect these using conditional compile? How does the autotools build
# manage it?
set(INCLUDES_STUN_FOLDER
   stun/Stun.hxx
   stun/Udp.hxx
)

# TODO: Have a special check for Android and don't include AndroidLogger
# everywhere...

# Used for compilation
set(SOURCES
   AbstractFifo.cxx
   AndroidLogger.cxx
   BaseException.cxx
   Coders.cxx
   Condition.cxx
   ConfigParse.cxx
   CountStream.cxx
   Data.cxx
   DataStream.cxx
   dns/AresDns.cxx
   dns/DnsAAAARecord.cxx
   dns/DnsCnameRecord.cxx
   dns/DnsHostRecord.cxx
   dns/DnsNaptrRecord.cxx
   dns/DnsResourceRecord.cxx
   dns/DnsSrvRecord.cxx
   dns/DnsStub.cxx
   dns/DnsThread.cxx
   dns/ExternalDnsFactory.cxx
   dns/LocalDns.cxx
   dns/QueryTypes.cxx
   dns/RRCache.cxx
   dns/RRList.cxx
   dns/RROverlay.cxx
   dns/RRVip.cxx
   DnsUtil.cxx
   FdPoll.cxx
   FileSystem.cxx
   GeneralCongestionManager.cxx
   GenericIPAddress.cxx
   HeapInstanceCounter.cxx
   KeyValueStore.cxx
   Lock.cxx
   Log.cxx
   MD5Stream.cxx
   Mutex.cxx
   NetNs.cxx
   ParseBuffer.cxx
   ParseException.cxx
   Poll.cxx
   PoolBase.cxx
   RADIUSDigestAuthenticator.cxx
   Random.cxx
   RecursiveMutex.cxx
   resipfaststreams.cxx
   RWMutex.cxx
   SelectInterruptor.cxx
   ServerProcess.cxx
   Sha1.cxx
   Socket.cxx
   stun/Stun.cxx
   stun/Udp.cxx
   Subsystem.cxx
   SysLogBuf.cxx
   SysLogStream.cxx
   ThreadIf.cxx
   Time.cxx
   Timer.cxx
   TransportType.cxx
   vmd5.cxx
   XMLCursor.cxx

   hep/HepAgent.cxx
   hep/ResipHep.cxx
)

# TODO: Add WceCompat.cxx on WinCE
set(SOURCES_WIN
   #wince/WceCompat.cxx
   WinCompat.cxx
)

set(SOURCES_SSL
   ssl/OpenSSLInit.cxx
   ssl/SHA1Stream.cxx
)

# If compiling with OpenSSL support, add extra SSL related source and header
# files
if(OPENSSL_FOUND)
   list(APPEND SOURCES ${SOURCES_SSL}) 
   list(APPEND INCLUDES ${INCLUDES_SSL})
   list(APPEND INCLUDES ${INCLUDES_SSL_FOLDER})

   # Since some ssl files are under the ssl folder they require their own
   # INSTALL command
   install(FILES ${INCLUDES_SSL_FOLDER} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/rutil/ssl)
endif()

list(APPEND INCLUDES ${INCLUDES_STUN_FOLDER})

# TODO: Remove Windows .hxx header files from INSTALL if not Windows

# TODO: Use SOURCE_GROUP to properly represent the subfolders in MS Visual
# Studio. For example stun/Stun.?xx is shown under VS in the root of the source
# tree, omitting the stun subfolder.

# Whether or not to build resip-ares
if(NOT WITH_C_ARES)
   add_subdirectory(dns/ares)
endif()

# OPENSSL_LIBRARIES will be empty if SSL is not used
set(TARGET_LIBS ${OPENSSL_LIBRARIES} ${ARES_LIBRARIES})

if(WIN32)
   # Also add Windows-related source and header files
   list(APPEND SOURCES ${SOURCES_WIN})
   list(APPEND INCLUDES ${INCLUDES_WIN})

   list(APPEND TARGET_LIBS winmm)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
   list(APPEND TARGET_LIBS rt)
endif()

add_library(rutil ${SOURCES} ${INCLUDES})
target_include_directories(rutil PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)
target_link_libraries(rutil ${TARGET_LIBS})
set_target_properties(rutil PROPERTIES FOLDER rutil VERSION ${SO_RELEASE})

install(TARGETS rutil DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES ${INCLUDES} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/rutil)

# Since some stun files are under the stun folder they require their own
# INSTALL command
install(FILES ${INCLUDES_STUN_FOLDER} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/rutil/stun)

add_subdirectory(test)
