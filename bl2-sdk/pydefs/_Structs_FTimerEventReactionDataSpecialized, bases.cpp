#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimerEventReactionDataSpecialized()
{
    class_< FTimerEventReactionDataSpecialized, bases< FSpecializedBehaviorEvent >  >("FTimerEventReactionDataSpecialized", no_init)
  ;
}