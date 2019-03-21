#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProjectileEvents()
{
    class_< FProjectileEvents >("FProjectileEvents", no_init)
        .def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
        .def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
  ;
}