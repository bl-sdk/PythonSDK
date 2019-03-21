#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFastTravelStationDefinition()
{
    class_< UFastTravelStationDefinition, bases< UTravelStationDefinition >  , boost::noncopyable>("UFastTravelStationDefinition", no_init)
        .def_readwrite("StationDescription", &UFastTravelStationDefinition::StationDescription)
        .def_readwrite("StationSign", &UFastTravelStationDefinition::StationSign)
        .def_readwrite("InaccessibleObjective", &UFastTravelStationDefinition::InaccessibleObjective)
        .def_readwrite("AccessibleObjective", &UFastTravelStationDefinition::AccessibleObjective)
        .def_readwrite("AccessibilityTime", &UFastTravelStationDefinition::AccessibilityTime)
        .def("StaticClass", &UFastTravelStationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}