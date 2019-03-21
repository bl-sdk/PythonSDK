#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimedAnimBehaviorEvent()
{
    class_< FTimedAnimBehaviorEvent, bases< FSpecializedBehaviorEvent >  >("FTimedAnimBehaviorEvent", no_init)
        .def_readwrite("Time", &FTimedAnimBehaviorEvent::Time)
  ;
}