/**
* @file     CObserver.h
* @author   cuiwl<cwllinux@126.com>
*
*/

#ifndef observer_pattern_CObserver_h
#define observer_pattern_CObserver_h

#include <vector> 
#include "../include/IListener.h"
#include "../include/IObserver.h"

namespace observer_pattern {

class CObserver
: public IListener
{
   // constructor / destructor
   public:
      CObserver();

      virtual
      ~CObserver();

   // define type
   public:
	   typedef std::vector<IObserver*>     TObserver;

   // register / unregistered
   public:
	   void addObserver(IObserver* pObserver);

	   void removeObserver(IObserver* pObserver);

   // Access / Modifiers
   public:
		void setXXXType(TBase::EType type)
		{ mType = type; notifyAllObservers(); }

   // helper
   private:
      const char* logPrefix() const { return spLogPrefix; }

      void notifyAllObservers();

   // attributes
   private:
		TObserver				mObservers;
		TBase::EType			mType;

		static const char*	spLogPrefix;

   // copy prevention
   private:
      CObserver(const CObserver& src);
      CObserver& operator=(const CObserver& src);
};

} // namespace observer_pattern
#endif // observer_pattern_CObserver_h
