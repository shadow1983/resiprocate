#if !defined(RESIP_DUMTIMER_HXX)
#define RESIP_DUMTIMER_HXX 

#include <iostream>
#include "resiprocate/Message.hxx"
#include "resiprocate/dum/BaseUsage.hxx"

namespace resip
{
class Data;

class DumTimeout : public Message
{
   public:
      typedef enum
      {
         Session,
         Registration,
         Provisional1,
         Provisional2,
         Publication,
         Retransmit200,
         StaleCall, // UAC gets no final response
      } Type;
      static const unsigned long StaleCallTimeout;

      DumTimeout(Type type, unsigned long duration, resip::BaseUsage::Handle target,  int seq, int aseq = -1);
      ~DumTimeout();
      
      Type type() const;
      int seq() const;
      int secondarySeq() const;

      BaseUsage::Handle getBaseUsage() const;

      virtual const Data& getTransactionId() const;
      virtual bool isClientTransaction() const;
      
      virtual Data brief() const;
      virtual std::ostream& encode(std::ostream& strm) const;
      
   private:
      Type mType;
      unsigned long mDuration;
      BaseUsage::Handle mUsageHandle;
      int mSeq;
      int mSecondarySeq;

};

}

#endif