set(INCLUDES
   ares.h
   ares_dns.h
   ares_private.h
   ares_version.h
   ares_compat.h
   ares_local.h
   ares_socketfunc.h
)

set(SOURCES
   ares__close_sockets.c
   ares__get_hostent.c
   ares__read_line.c
   ares_destroy.c
   ares_expand_name.c
   ares_fds.c
   ares_free_errmem.c
   ares_free_hostent.c
   ares_free_string.c
   ares_gethostbyaddr.c
   ares_gethostbyname.c
   ares_init.c
   ares_local.c
   ares_mkquery.c
   ares_parse_a_reply.c
   ares_parse_ptr_reply.c
   ares_process.c
   ares_query.c
   ares_search.c
   ares_send.c
   ares_strerror.c
   ares_timeout.c
)

include_directories(.)

if(CMAKE_HOST_WIN32)
   # Use static .lib on Windows because resip ares doesn't export any symbols
   add_library(ares ${SOURCES})
   target_link_libraries(ares PRIVATE ws2_32)
else()
   add_library(ares SHARED ${SOURCES})
endif()

if(APPLE)
   target_link_libraries(ares PRIVATE "-framework CoreFoundation")
   target_link_libraries(ares PRIVATE "-framework SystemConfiguration")
endif()

add_executable(ahost ahost.c)
add_executable(adig adig.c)

target_link_libraries(ahost ares)
target_link_libraries(adig ares)

set_target_properties(ares PROPERTIES FOLDER ares)
set_target_properties(ahost PROPERTIES FOLDER ares)
set_target_properties(adig PROPERTIES FOLDER ares)

# TODO: Do we need to also install ahost + adig?
install(TARGETS ares DESTINATION lib)
# TODO: Where to put resip ares' include files? Straight under
# /usr/local/include or under rutil/...?
install(FILES ${INCLUDES} DESTINATION include)
