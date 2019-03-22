#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_Patrol(py::module &m)
{
    py::class_< UAction_Patrol,  UAction_FollowPath   >(m, "UAction_Patrol")
        .def_readwrite("TimeBetweenPatrolMovement", &UAction_Patrol::TimeBetweenPatrolMovement)
        .def_readwrite("TimeOfNextRandomPatrol", &UAction_Patrol::TimeOfNextRandomPatrol)
        .def_readwrite("HideLocation", &UAction_Patrol::HideLocation)
        .def_readwrite("HideLimits", &UAction_Patrol::HideLimits)
        .def("CheckFullyBlocked", &UAction_Patrol::CheckFullyBlocked)
        .def("GetRandomHomeLocation", &UAction_Patrol::GetRandomHomeLocation)
        .def("SetMoveNode", &UAction_Patrol::SetMoveNode)
        .def("GetMoveNode", &UAction_Patrol::GetMoveNode, py::return_value_policy::reference)
        .def("SetMoveNodeSpeed", &UAction_Patrol::SetMoveNodeSpeed)
        .def("SetMoveFacingPolicy", &UAction_Patrol::SetMoveFacingPolicy)
        .def("ShowDesignError", &UAction_Patrol::ShowDesignError)
        .def("CheckStateTransition", &UAction_Patrol::CheckStateTransition)
        .def("GetPatrolState", &UAction_Patrol::GetPatrolState)
        .def("eventStop", &UAction_Patrol::eventStop)
        .def("eventStart", &UAction_Patrol::eventStart)
        .def("eventScriptCleanUp", &UAction_Patrol::eventScriptCleanUp)
          ;
}