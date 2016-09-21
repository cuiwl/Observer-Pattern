

#include "CObserver.h"
#include "../include/listener/CListenerA.h"
#include "../include/listener/CListenerB.h"
#include "../include/listener/CListenerC.h"
#include "../include/listener/CListenerD.h"

using namespace observer_pattern;

int main(int argc, char** argv)
{
	CObserver observer;
	CListenerA listenerA;
	CListenerB listenerB;
	CListenerC listenerC;
	CListenerD listenerD;
	
	// register
	observer.addObserver(&listenerA);
	observer.addObserver(&listenerB);
	observer.addObserver(&listenerC);
	observer.addObserver(&listenerD);

	observer.setXXXType(TBase::EType_One);

	// unregister
	observer.removeObserver(&listenerD);
	observer.removeObserver(&listenerC);
	observer.removeObserver(&listenerB);
	observer.removeObserver(&listenerA);
	return 0;
}
