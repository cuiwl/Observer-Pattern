/**
* @file     IListener.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#ifndef observer_pattern_IListener_h
#define observer_pattern_IListener_h

#include "IObserver.h"

namespace observer_pattern {

class IListener
{
	public:
		// destructor
		virtual ~IListener() { }

	public:
		virtual void addObserver(IObserver* pObserver) = 0;

		virtual void removeObserver(IObserver* pObserver) = 0;
};


} // namespace observer_pattern
#endif // observer_pattern_IListener_h
