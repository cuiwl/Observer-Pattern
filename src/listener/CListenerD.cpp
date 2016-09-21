/**
* @file     CListenerD.cpp
* @author   cuiwl<cwllinux@126.com>
*
*/

/**
   version history:

   2016-09-21     0.1.0    cuiwl        initial implementation
**/


#include "../../Include/listener/CListenerD.h"

namespace observer_pattern {

const char* CListenerD::spLogPrefix = "CListenerD";

// constructor / destructor
CListenerD::CListenerD()
{
}

CListenerD::~CListenerD()
{
}

// derived from IObserver
void CListenerD::onXXXChanged(const TBase::EType type)
{
	printf("%s: receive onXXXChanged - type:%d\n", logPrefix(), type);
}


} // namespace observer_pattern
