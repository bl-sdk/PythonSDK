#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringZoneDefinition()
{
    class_< UFiringZoneDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFiringZoneDefinition", no_init)
        .def_readwrite("ZoneName", &UFiringZoneDefinition::ZoneName)
        .def_readwrite("OuterRimDistance", &UFiringZoneDefinition::OuterRimDistance)
        .def_readwrite("ZoneColor", &UFiringZoneDefinition::ZoneColor)
        .def_readwrite("FiringBehavior", &UFiringZoneDefinition::FiringBehavior)
        .def("StaticClass", &UFiringZoneDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}