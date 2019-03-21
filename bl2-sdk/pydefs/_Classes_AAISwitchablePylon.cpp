#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAISwitchablePylon()
{
    class_< AAISwitchablePylon, bases< APylon >  , boost::noncopyable>("AAISwitchablePylon", no_init)
        .def("StaticClass", &AAISwitchablePylon::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsEnabled", &AAISwitchablePylon::eventIsEnabled)
        .def("eventSetEnabled", &AAISwitchablePylon::eventSetEnabled)
        .def("PostBeginPlay", &AAISwitchablePylon::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}