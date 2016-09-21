/**
* @file     CObserver.cpp
* @author   cuiwl<cwllinux@126.com>
*
*/

/**
   version history:

   2016-09-21     0.1.0    cuiwl        initial implementation
**/


#include <algorithm>

#include "../CObserver.h"

namespace observer_pattern {

const char* CObserver::spLogPrefix = "CObserver";

// constructor / destructor
CObserver::CObserver()
: mObservers()
, mType(TBase::EType_None)
{
}

CObserver::~CObserver()
{
}

// register / unregistered
void CObserver::addObserver(IObserver* pObserver) 
{
   if( 0 != pObserver ) 
   {
      mObservers.push_back(pObserver);
   }
}

void CObserver::removeObserver(IObserver* pObserver)
{
   if( 0 == pObserver ) { return; }

	TObserver::iterator it = std::find(mObservers.begin(), mObservers.end(), pObserver);
   if ( it!= mObservers.end() )
   {
      mObservers.erase(it);
   }
}

// helper
void CObserver::notifyAllObservers()
{
	TObserver::iterator it = mObservers.begin();
   for ( ; it != mObservers.end(); ++it )
   {
		(*it)->onXXXChanged(mType);
   }
}


} // namespace observer_pattern
