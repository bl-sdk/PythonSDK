#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateInstancedMissionBehaviorSequence(py::module &m)
{
    py::class_< UBehavior_ActivateInstancedMissionBehaviorSequence,  UBehaviorBase   >(m, "UBehavior_ActivateInstancedMissionBehaviorSequence")
		.def_static("StaticClass", &UBehavior_ActivateInstancedMissionBehaviorSequence::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Mission", &UBehavior_ActivateInstancedMissionBehaviorSequence::Mission)
        .def_readwrite("MissionObjective", &UBehavior_ActivateInstancedMissionBehaviorSequence::MissionObjective)
        .def_readwrite("SequenceName", &UBehavior_ActivateInstancedMissionBehaviorSequence::SequenceName)
        .def("ApplyBehaviorToContext", &UBehavior_ActivateInstancedMissionBehaviorSequence::ApplyBehaviorToContext)
          ;
}