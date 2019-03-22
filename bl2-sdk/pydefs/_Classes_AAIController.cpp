#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAIController(py::module &m)
{
    py::class_< AAIController,  AController   >(m, "AAIController")
        .def_readwrite("Skill", &AAIController::Skill)
        .def_readwrite("ScriptedMoveTarget", &AAIController::ScriptedMoveTarget)
        .def_readwrite("ScriptedRoute", &AAIController::ScriptedRoute)
        .def_readwrite("ScriptedRouteIndex", &AAIController::ScriptedRouteIndex)
        .def_readwrite("ScriptedFocus", &AAIController::ScriptedFocus)
        .def("StaticClass", &AAIController::StaticClass, py::return_value_policy::reference)
        .def("CanFireWeapon", &AAIController::CanFireWeapon)
        .def("NotifyWeaponFinishedFiring", &AAIController::NotifyWeaponFinishedFiring)
        .def("NotifyWeaponFired", &AAIController::NotifyWeaponFired)
        .def("OnAIMoveToActor", &AAIController::OnAIMoveToActor)
        .def("GetPlayerViewPoint", &AAIController::GetPlayerViewPoint)
        .def("eventSetTeam", &AAIController::eventSetTeam)
        .def("Reset", &AAIController::Reset)
        .def("eventPreBeginPlay", &AAIController::eventPreBeginPlay)
          ;
}