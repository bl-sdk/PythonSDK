#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringZoneCollectionDefinition(py::module &m)
{
    py::class_< UFiringZoneCollectionDefinition,  UGBXDefinition   >(m, "UFiringZoneCollectionDefinition")
        .def_readwrite("Zones", &UFiringZoneCollectionDefinition::Zones)
        .def("eventGetZoneForDistance", &UFiringZoneCollectionDefinition::eventGetZoneForDistance, py::return_value_policy::reference)
          ;
}