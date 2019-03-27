#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionDirectivesDefinition(py::module &m)
{
    py::class_< UMissionDirectivesDefinition,  UGBXDefinition   >(m, "UMissionDirectivesDefinition")
		.def_static("StaticClass", &UMissionDirectivesDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MissionDirectives", &UMissionDirectivesDefinition::MissionDirectives)
        .def("AddDirective", &UMissionDirectivesDefinition::AddDirective)
        .def("AddWaypointsForDirective", &UMissionDirectivesDefinition::AddWaypointsForDirective)
        .def("CreateWaypoints", &UMissionDirectivesDefinition::CreateWaypoints)
          ;
}