#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_DeathTrap(py::object m)
{
    py::class_< UAction_DeathTrap,  UWillowActionSequencePawn   >(m, "UAction_DeathTrap")
        .def_readwrite("MoveRange", &UAction_DeathTrap::MoveRange)
        .def_readwrite("RandomHOffset", &UAction_DeathTrap::RandomHOffset)
        .def_readwrite("RandomVOffset", &UAction_DeathTrap::RandomVOffset)
        .def_readwrite("RandomTime", &UAction_DeathTrap::RandomTime)
        .def_readwrite("RandomAngleLimits", &UAction_DeathTrap::RandomAngleLimits)
        .def_readwrite("AttackDist", &UAction_DeathTrap::AttackDist)
        .def_readwrite("CurrentMoveOffset", &UAction_DeathTrap::CurrentMoveOffset)
        .def("StaticClass", &UAction_DeathTrap::StaticClass, py::return_value_policy::reference)
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
        .def("GetPointDefense", &UAction_DeathTrap::GetPointDefense, py::return_value_policy::reference)
        .def("GetOwner", &UAction_DeathTrap::GetOwner, py::return_value_policy::reference)
        .def("eventStop", &UAction_DeathTrap::eventStop)
        .def("eventStart", &UAction_DeathTrap::eventStart)
        .def("eventCanRun", &UAction_DeathTrap::eventCanRun)
          ;
}