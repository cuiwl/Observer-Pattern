/**
* @file     CListenerA.h
* @author   cuiwl<cwllinux@126.com>
*
*/


#ifndef observer_pattern_CListenerA_h
#define observer_pattern_CListenerA_h

#include <vector> 
#include "../IObserver.h"

namespace observer_pattern {

class CListenerA
: public IObserver
{
   // constructor / destructor
   public:
      CListenerA();

      virtual ~CListenerA();

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
      CListenerA(const CListenerA& src);
      CListenerA& operator=(const CListenerA& src);
};

} // namespace observer_pattern
#endif // observer_pattern_CListenerA_h
