/**
* @file     CListenerC.h
* @author   cuiwl<cwllinux@126.com>
*
*/


#ifndef observer_pattern_CListenerC_h
#define observer_pattern_CListenerC_h

#include <vector> 
#include "../IObserver.h"

namespace observer_pattern {

class CListenerC
: public IObserver
{
   // constructor / destructor
   public:
      CListenerC();

      virtual ~CListenerC();

	// derived from IObserver
	public:
		virtual void onXXXChanged(const TBase::EType type);

   // helper
   private:
      const char* logPrefix() const { return spLogPrefix; }


   // attributes
   private:
		static const char*	spLogPrefix;

   // copy prevention
   private:
      CListenerC(const CListenerC& src);
      CListenerC& operator=(const CListenerC& src);
};

} // namespace observer_pattern
#endif // observer_pattern_CListenerC_h
