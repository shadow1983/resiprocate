#include "sip2/util/MD5Stream.hxx"

using namespace Vocal2;

MD5Buffer::MD5Buffer()
{
   MD5Init(&mContext);
   setp(mBuf, mBuf + sizeof(mBuf));
}

MD5Buffer::~MD5Buffer()
{
}

int
MD5Buffer::sync()
{
   size_t len = pptr() - pbase();
   if (len > 0) 
   {
      MD5Update(&mContext, reinterpret_cast <unsigned const char*>(pbase()), len);
      // reset the put buffer
      setp(mBuf, mBuf + sizeof(mBuf));
   }
   return 0;
}

int
MD5Buffer::overflow(int c)
{
   sync();
   if (c != -1) 
   {
      mBuf[0] = c;
      pbump(1);
      return c;
   }
   return 0;
}

Data 
MD5Buffer::getHex()
{
   MD5Final((unsigned char*)mBuf, &mContext);
   Data digest((const char*)mBuf,16, false);
   return digest.hex();   
}

MD5Stream::MD5Stream()
   : std::ostream(0),
     mStreambuf()
{
   init(&mStreambuf);
}

MD5Stream::~MD5Stream()
{}

Data 
MD5Stream::getHex()
{
   flush();
   return mStreambuf.getHex();
}
