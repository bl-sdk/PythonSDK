#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationDefinition(py::module &m)
{
    py::class_< UFastTravelStationDefinition,  UTravelStationDefinition   >(m, "UFastTravelStationDefinition")
		.def_static("StaticClass", &UFastTravelStationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StationDescription", &UFastTravelStationDefinition::StationDescription)
        .def_readwrite("StationSign", &UFastTravelStationDefinition::StationSign)
        .def_readwrite("InaccessibleObjective", &UFastTravelStationDefinition::InaccessibleObjective)
        .def_readwrite("AccessibleObjective", &UFastTravelStationDefinition::AccessibleObjective)
        .def_readwrite("AccessibilityTime", &UFastTravelStationDefinition::AccessibilityTime)
          ;
}