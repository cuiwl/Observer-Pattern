/**
* @file     CListenerA.cpp
* @author   cuiwl<cwllinux@126.com>
*
*/

/**
   version history:

   2016-09-21     0.1.0    cuiwl        initial implementation
**/


#include "../../Include/listener/CListenerA.h"

namespace observer_pattern {

const char* CListenerA::spLogPrefix = "CListenerA";

// constructor / destructor
CListenerA::CListenerA()
{
}

CListenerA::~CListenerA()
{
}

// derived from IObserver
void CListenerA::onXXXChanged(const TBase::EType type)
{
	printf("%s: receive onXXXChanged - type:%d\n", logPrefix(), type);
}


} // namespace observer_pattern
