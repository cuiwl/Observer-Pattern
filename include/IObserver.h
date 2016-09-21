/**
* @file     IObserver.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#ifndef observer_pattern_IObserver_h
#define observer_pattern_IObserver_h

#include "TBase.h"

namespace observer_pattern {

class IObserver
{
   public:
      // destructor
	   virtual ~IObserver() {}

   public:
      virtual void onXXXChanged(const TBase::EType type) = 0;
};


} // namespace observer_pattern
#endif // observer_pattern_IObserver_h
