#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpecializedBehaviorEvent()
{
    class_< FSpecializedBehaviorEvent >("FSpecializedBehaviorEvent", no_init)
        .def_readwrite("EventName", &FSpecializedBehaviorEvent::EventName)
  ;
}