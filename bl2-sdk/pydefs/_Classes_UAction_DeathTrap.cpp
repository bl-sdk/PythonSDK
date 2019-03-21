#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_DeathTrap()
{
    class_< UAction_DeathTrap, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_DeathTrap", no_init)
        .def_readwrite("MoveRange", &UAction_DeathTrap::MoveRange)
        .def_readwrite("RandomHOffset", &UAction_DeathTrap::RandomHOffset)
        .def_readwrite("RandomVOffset", &UAction_DeathTrap::RandomVOffset)
        .def_readwrite("RandomTime", &UAction_DeathTrap::RandomTime)
        .def_readwrite("RandomAngleLimits", &UAction_DeathTrap::RandomAngleLimits)
        .def_readwrite("AttackDist", &UAction_DeathTrap::AttackDist)
        .def_readwrite("CurrentMoveOffset", &UAction_DeathTrap::CurrentMoveOffset)
        .def("StaticClass", &UAction_DeathTrap::StaticClass, return_value_policy< reference_existing_object >())
        .def("Reinitialize", &UAction_DeathTrap::Reinitialize)
        .def("WantsPath", &UAction_DeathTrap::WantsPath)
        .def("StopAttacking", &UAction_DeathTrap::StopAttacking)
        .def("StartAttacking", &UAction_DeathTrap::StartAttacking)
        .def("CheckAttack", &UAction_DeathTrap::CheckAttack)
        .def("CanAttack", &UAction_DeathTrap::CanAttack)
        .def("eventActivateEvent", &UAction_DeathTrap::eventActivateEvent)
        .def("GetBufferDist", &UAction_DeathTrap::GetBufferDist)
        .def("GetMoveLoc", &UAction_DeathTrap::GetMoveLoc)
        .def("PickRandomOffset", &UAction_DeathTrap::PickRandomOffset)
        .def("GetRandomYaw", &UAction_DeathTrap::GetRandomYaw)
        .def("GetPointDefense", &UAction_DeathTrap::GetPointDefense, return_value_policy< reference_existing_object >())
        .def("GetOwner", &UAction_DeathTrap::GetOwner, return_value_policy< reference_existing_object >())
        .def("eventStop", &UAction_DeathTrap::eventStop)
        .def("eventStart", &UAction_DeathTrap::eventStart)
        .def("eventCanRun", &UAction_DeathTrap::eventCanRun)
        .staticmethod("StaticClass")
  ;
}