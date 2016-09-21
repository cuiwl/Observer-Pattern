/**
* @file     CListenerD.h
* @author   cuiwl<cwllinux@126.com>
*
*/


#ifndef observer_pattern_CListenerD_h
#define observer_pattern_CListenerD_h

#include <vector> 
#include "../IObserver.h"

namespace observer_pattern {

class CListenerD
: public IObserver
{
   // constructor / destructor
   public:
      CListenerD();

      virtual ~CListenerD();

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
      CListenerD(const CListenerD& src);
      CListenerD& operator=(const CListenerD& src);
};

} // namespace observer_pattern
#endif // observer_pattern_CListenerD_h
