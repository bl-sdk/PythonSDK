#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTravelStationDefinition(py::module &m)
{
    py::class_< UTravelStationDefinition,  UGBXDefinition   >(m, "UTravelStationDefinition")
        .def_readwrite("StationLevelName", &UTravelStationDefinition::StationLevelName)
        .def_readwrite("PreviousStation", &UTravelStationDefinition::PreviousStation)
        .def_readwrite("DlcExpansion", &UTravelStationDefinition::DlcExpansion)
        .def_readwrite("StationLocation", &UTravelStationDefinition::StationLocation)
        .def_readwrite("StationDisplayImage", &UTravelStationDefinition::StationDisplayImage)
        .def_readwrite("StationDisplayName", &UTravelStationDefinition::StationDisplayName)
        .def_readwrite("MissionDependencies", &UTravelStationDefinition::MissionDependencies)
        .def("StaticGetAccessibleLevelName", &UTravelStationDefinition::StaticGetAccessibleLevelName)
        .def("GetStationLevelName", &UTravelStationDefinition::GetStationLevelName)
          ;
}