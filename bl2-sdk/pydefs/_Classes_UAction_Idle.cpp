#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_Idle(py::module &m)
{
    py::class_< UAction_Idle,  UAction_Burrow   >(m, "UAction_Idle")
        .def_readwrite("IdleTime", &UAction_Idle::IdleTime)
        .def_readwrite("CloakBehavior", &UAction_Idle::CloakBehavior)
        .def_readwrite("FollowType", &UAction_Idle::FollowType)
        .def_readwrite("DistMin", &UAction_Idle::DistMin)
        .def_readwrite("DistMax", &UAction_Idle::DistMax)
        .def_readwrite("CheckRate", &UAction_Idle::CheckRate)
        .def("StaticClass", &UAction_Idle::StaticClass, py::return_value_policy::reference)
        .def("CheckStateTransition", &UAction_Idle::CheckStateTransition)
        .def("ShouldPathToTarget", &UAction_Idle::ShouldPathToTarget)
        .def("GetGoalActor", &UAction_Idle::GetGoalActor, py::return_value_policy::reference)
        .def("IdleFinished", &UAction_Idle::IdleFinished)
        .def("eventStop", &UAction_Idle::eventStop)
        .def("eventStart", &UAction_Idle::eventStart)
        .def("eventCanRun", &UAction_Idle::eventCanRun)
          ;
}