#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTravelStationDefinition()
{
    py::class_< ULevelTravelStationDefinition,  UTravelStationDefinition   >("ULevelTravelStationDefinition")
        .def_readwrite("DestinationStationDefinition", &ULevelTravelStationDefinition::DestinationStationDefinition)
        .def_readwrite("DisplayName", &ULevelTravelStationDefinition::DisplayName)
        .def("StaticClass", &ULevelTravelStationDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}