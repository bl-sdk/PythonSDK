#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringZoneCollectionDefinition()
{
    py::class_< UFiringZoneCollectionDefinition,  UGBXDefinition   >("UFiringZoneCollectionDefinition")
        .def_readwrite("Zones", &UFiringZoneCollectionDefinition::Zones)
        .def("StaticClass", &UFiringZoneCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def("eventGetZoneForDistance", &UFiringZoneCollectionDefinition::eventGetZoneForDistance, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}