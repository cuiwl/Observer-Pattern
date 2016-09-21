/**
* @file     CListenerC.cpp
* @author   cuiwl<cwllinux@126.com>
*
*/

/**
   version history:

   2016-09-21     0.1.0    cuiwl        initial implementation
**/


#include "../../Include/listener/CListenerC.h"

namespace observer_pattern {

const char* CListenerC::spLogPrefix = "CListenerC";

// constructor / destructor
CListenerC::CListenerC()
{
}

CListenerC::~CListenerC()
{
}

// derived from IObserver
void CListenerC::onXXXChanged(const TBase::EType type)
{
	printf("%s: receive onXXXChanged - type:%d\n", logPrefix(), type);
}


} // namespace observer_pattern
