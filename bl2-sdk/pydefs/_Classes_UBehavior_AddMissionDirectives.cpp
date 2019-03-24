#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddMissionDirectives(py::module &m)
{
    py::class_< UBehavior_AddMissionDirectives,  UBehaviorBase   >(m, "UBehavior_AddMissionDirectives")
		.def_static("StaticClass", &UBehavior_AddMissionDirectives::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MissionDirectives", &UBehavior_AddMissionDirectives::MissionDirectives)
        .def("ApplyBehaviorToContext", &UBehavior_AddMissionDirectives::ApplyBehaviorToContext)
          ;
}