/**
* @file     CListenerB.cpp
* @author   cuiwl<cwllinux@126.com>
*
*/

/**
   version history:

   2016-09-21     0.1.0    cuiwl        initial implementation
**/


#include "../../Include/listener/CListenerB.h"

namespace observer_pattern {

const char* CListenerB::spLogPrefix = "CListenerB";

// constructor / destructor
CListenerB::CListenerB()
{
}

CListenerB::~CListenerB()
{
}

// derived from IObserver
void CListenerB::onXXXChanged(const TBase::EType type)
{
	printf("%s: receive onXXXChanged - type:%d\n", logPrefix(), type);
}


} // namespace observer_pattern
