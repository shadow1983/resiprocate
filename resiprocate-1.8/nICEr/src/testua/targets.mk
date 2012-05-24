# Copyright (c) 2007, Adobe Systems, Incorporated
# All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
# 
# * Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# 
# * Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in the
#   documentation and/or other materials provided with the distribution.
# 
# * Neither the name of Adobe Systems, Network Resonance nor the names of its
#   contributors may be used to endorse or promote products derived from
#   this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# ICE_TESTUA_ARCHIVE:
#    source files to compile to object and to place in a library archive
#
# ICE_TESTUA_ARCHIVE_NAME:
#    the library name to use to archive the object files
#
# ICE_TESTUA_ARCHIVE_TYPE:
#    either 'static', 'dynamic', or 'jni' (the default is 'static')
#
# ICE_TESTUA_AUTOGENERATED:
#    whether this targets.mk is autogenerated (either 'true' or 'false')
#
# ICE_TESTUA_COMPILE:
#    source files to compile to object
#
# ICE_TESTUA_COPY:
#    files to copy to the build directory
#
# ICE_TESTUA_GLOBAL_CFLAGS:
#    preprocessor and compile-time flags specific to compiling
#    everything
#
# ICE_TESTUA_GLOBAL_LDFLAGS:
#    link-time flags specific to linking everything
#
# ICE_TESTUA_LINK:
#    source files compile and link
#
# ICE_TESTUA_LOCAL_CFLAGS:
#    preprocessor and compile-time flags specific to compiling only
#    the files in this module directory
#
# ICE_TESTUA_LOCAL_LDFLAGS:
#    link-time flags specific to linking only the files in
#    this module directory
#
# ICE_TESTUA_PREFIX:
#    defines the module name, which also serves as the
#    prefix for all the variable names defined in this file
#
# ICE_TESTUA_SUBDIRS:
#    subdirectories containing additional targets.mk files
#
ICE_TESTUA_ARCHIVE                = CallHandler.cxx CommandLineParser.cxx \
                                    UserAgent.cxx
ICE_TESTUA_ARCHIVE_NAME           = testua
ICE_TESTUA_ARCHIVE_TYPE           =
ICE_TESTUA_AUTOGENERATED          = true
ICE_TESTUA_COMPILE                =
ICE_TESTUA_COPY                   =
ICE_TESTUA_GLOBAL_CFLAGS          =
ICE_TESTUA_GLOBAL_LDFLAGS         =
ICE_TESTUA_LINK                   = testUA.cxx
ICE_TESTUA_LOCAL_CFLAGS           = -I$(RESIPROCATE_SRCDIR) \
                                    -I/usr/local/include
ICE_TESTUA_LOCAL_LDFLAGS          = -pthread \
                                    -L$(RESIPROCATE_SRCDIR)contrib/ares-build.$(RESIPROCATE_PLATFORM) \
                                    -L$(RESIPROCATE_SRCDIR)resip/dum/obj.$(RESIPROCATE_DEBUG)$(RESIPROCATE_PLATFORM) \
                                    -L$(RESIPROCATE_SRCDIR)resip/stack/obj.$(RESIPROCATE_DEBUG)$(RESIPROCATE_PLATFORM) \
                                    -L$(RESIPROCATE_SRCDIR)rutil/obj.$(RESIPROCATE_DEBUG)$(RESIPROCATE_PLATFORM) \
                                    -L$(RESIPROCATE_SRCDIR)lib.$(RESIPROCATE_DEBUG)$(RESIPROCATE_PLATFORM) \
                                    -L/usr/local/lib libtestua.a -ldum -lresip \
                                    -lrutil -lares -lpopt
ICE_TESTUA_PREFIX                 = ICE_TESTUA
ICE_TESTUA_SUBDIRS                =



#
#    AUTOMATICALLY-GENERATED SECTION
#



#
#    LOCAL ENVIRONMENT
#
ICE_TESTUA_BUILD                  = CallHandler.$(OBJSUFFIX) CallHandler.d \
                                    CommandLineParser.$(OBJSUFFIX) \
                                    CommandLineParser.d UserAgent.$(OBJSUFFIX) \
                                    UserAgent.d libtestua.$(ARSUFFIX) testUA \
                                    testUA.$(OBJSUFFIX) testUA.d



#
#    GLOBAL ENVIRONMENT
#
GLOBAL_BUILD                     += $(ICE_TESTUA_BUILD)
GLOBAL_CFLAGS                    += $(ICE_TESTUA_GLOBAL_CFLAGS) \
                                 -I$(ICE_TESTUA_SRCDIR)
GLOBAL_LDFLAGS                   += $(ICE_TESTUA_GLOBAL_LDFLAGS)



#
#    GENERIC DEPENDENCIES
#
all:                                $(ICE_TESTUA_BUILD)
depend:                             CallHandler.d
depend:                             CommandLineParser.d
depend:                             UserAgent.d
depend:                             testUA.d



#
#    BUILD DEPENDENCIES
#

CallHandler.$(OBJSUFFIX): $(ICE_TESTUA_SRCDIR)CallHandler.cxx CallHandler.d
	$(COMPILE.cxx) $@ $< $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

CallHandler.d: $(ICE_TESTUA_SRCDIR)CallHandler.cxx
	$(COMPILE.cxx) $@ $< -MM -MG $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

CommandLineParser.$(OBJSUFFIX): $(ICE_TESTUA_SRCDIR)CommandLineParser.cxx CommandLineParser.d
	$(COMPILE.cxx) $@ $< $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

CommandLineParser.d: $(ICE_TESTUA_SRCDIR)CommandLineParser.cxx
	$(COMPILE.cxx) $@ $< -MM -MG $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

UserAgent.$(OBJSUFFIX): $(ICE_TESTUA_SRCDIR)UserAgent.cxx UserAgent.d
	$(COMPILE.cxx) $@ $< $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

UserAgent.d: $(ICE_TESTUA_SRCDIR)UserAgent.cxx
	$(COMPILE.cxx) $@ $< -MM -MG $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

testUA.$(OBJSUFFIX): $(ICE_TESTUA_SRCDIR)testUA.cxx testUA.d
	$(COMPILE.cxx) $@ $< $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

testUA.d: $(ICE_TESTUA_SRCDIR)testUA.cxx
	$(COMPILE.cxx) $@ $< -MM -MG $(ICE_TESTUA_LOCAL_CFLAGS) $(GLOBAL_CFLAGS)

libtestua.$(ARSUFFIX): CallHandler.$(OBJSUFFIX)

libtestua.$(ARSUFFIX): CommandLineParser.$(OBJSUFFIX)

libtestua.$(ARSUFFIX): UserAgent.$(OBJSUFFIX)

libtestua.$(ARSUFFIX): 
	$(AR) $(ARFLAGS) $@ $?
	$(RANLIB) $@

testUA: testUA.$(OBJSUFFIX) $(GLOBAL_LIBNAME)
	$(LINK.cxx) $@ testUA.$(OBJSUFFIX) $(ICE_TESTUA_LOCAL_LDFLAGS) $(GLOBAL_LDFLAGS)
