/**
* @file     CListenerB.h
* @author   cuiwl<cwllinux@126.com>
*
*/


#ifndef observer_pattern_CListenerB_h
#define observer_pattern_CListenerB_h

#include <vector> 
#include "../IObserver.h"

namespace observer_pattern {

class CListenerB
: public IObserver
{
   // constructor / destructor
   public:
      CListenerB();

      virtual ~CListenerB();

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
      CListenerB(const CListenerB& src);
      CListenerB& operator=(const CListenerB& src);
};

} // namespace observer_pattern
#endif // observer_pattern_CListenerB_h
