#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomEventReactionDataSpecialized()
{
    class_< FCustomEventReactionDataSpecialized, bases< FSpecializedBehaviorEvent >  >("FCustomEventReactionDataSpecialized", no_init)
  ;
}