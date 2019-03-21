#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateMissionObjective()
{
    py::class_< UBehavior_UpdateMissionObjective,  UBehaviorBase   >("UBehavior_UpdateMissionObjective")
        .def_readwrite("MissionObjective", &UBehavior_UpdateMissionObjective::MissionObjective)
        .def("StaticClass", &UBehavior_UpdateMissionObjective::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UpdateMissionObjective::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}