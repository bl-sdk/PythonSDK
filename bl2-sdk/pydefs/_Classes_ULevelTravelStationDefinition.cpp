#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTravelStationDefinition(py::module &m)
{
    py::class_< ULevelTravelStationDefinition,  UTravelStationDefinition   >(m, "ULevelTravelStationDefinition")
		.def_static("StaticClass", &ULevelTravelStationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DestinationStationDefinition", &ULevelTravelStationDefinition::DestinationStationDefinition)
        .def_readwrite("DisplayName", &ULevelTravelStationDefinition::DisplayName)
          ;
}