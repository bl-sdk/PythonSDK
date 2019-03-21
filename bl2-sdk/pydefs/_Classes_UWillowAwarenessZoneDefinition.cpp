#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAwarenessZoneDefinition()
{
    class_< UWillowAwarenessZoneDefinition, bases< UAwarenessZoneDefinition >  , boost::noncopyable>("UWillowAwarenessZoneDefinition", no_init)
        .def_readwrite("ThreatLevel", &UWillowAwarenessZoneDefinition::ThreatLevel)
        .def("StaticClass", &UWillowAwarenessZoneDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}