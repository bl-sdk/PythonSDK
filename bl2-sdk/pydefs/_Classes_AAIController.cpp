#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAIController()
{
    class_< AAIController, bases< AController >  , boost::noncopyable>("AAIController", no_init)
        .def_readwrite("Skill", &AAIController::Skill)
        .def_readwrite("ScriptedMoveTarget", &AAIController::ScriptedMoveTarget)
        .def_readwrite("ScriptedRoute", &AAIController::ScriptedRoute)
        .def_readwrite("ScriptedRouteIndex", &AAIController::ScriptedRouteIndex)
        .def_readwrite("ScriptedFocus", &AAIController::ScriptedFocus)
        .def("StaticClass", &AAIController::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanFireWeapon", &AAIController::CanFireWeapon)
        .def("NotifyWeaponFinishedFiring", &AAIController::NotifyWeaponFinishedFiring)
        .def("NotifyWeaponFired", &AAIController::NotifyWeaponFired)
        .def("OnAIMoveToActor", &AAIController::OnAIMoveToActor)
        .def("GetPlayerViewPoint", &AAIController::GetPlayerViewPoint)
        .def("eventSetTeam", &AAIController::eventSetTeam)
        .def("Reset", &AAIController::Reset)
        .def("eventPreBeginPlay", &AAIController::eventPreBeginPlay)
        .staticmethod("StaticClass")
  ;
}