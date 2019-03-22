#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMutator(py::module &m)
{
    py::class_< AMutator,  AInfo   >(m, "AMutator")
        .def_readwrite("NextMutator", &AMutator::NextMutator)
        .def_readwrite("GroupNames", &AMutator::GroupNames)
        .def("NetDamage", &AMutator::NetDamage)
        .def("ScoreKill", &AMutator::ScoreKill)
        .def("ScoreObjective", &AMutator::ScoreObjective)
        .def("PreventDeath", &AMutator::PreventDeath)
        .def("OverridePickupQuery", &AMutator::OverridePickupQuery)
        .def("CheckEndGame", &AMutator::CheckEndGame)
        .def("HandleRestartGame", &AMutator::HandleRestartGame)
        .def("FindPlayerStart", &AMutator::FindPlayerStart, py::return_value_policy::reference)
        .def("GetSeamlessTravelActorList", &AMutator::GetSeamlessTravelActorList)
        .def("InitMutator", &AMutator::InitMutator)
        .def("DriverLeftVehicle", &AMutator::DriverLeftVehicle)
        .def("CanLeaveVehicle", &AMutator::CanLeaveVehicle)
        .def("DriverEnteredVehicle", &AMutator::DriverEnteredVehicle)
        .def("NotifyLogin", &AMutator::NotifyLogin)
        .def("NotifyLogout", &AMutator::NotifyLogout)
        .def("CheckReplacement", &AMutator::CheckReplacement)
        .def("CheckRelevance", &AMutator::CheckRelevance)
        .def("IsRelevant", &AMutator::IsRelevant)
        .def("AlwaysKeep", &AMutator::AlwaysKeep)
        .def("AddMutator", &AMutator::AddMutator)
        .def("ModifyPlayer", &AMutator::ModifyPlayer)
        .def("ModifyLogin", &AMutator::ModifyLogin)
        .def("Mutate", &AMutator::Mutate)
        .def("eventDestroyed", &AMutator::eventDestroyed)
        .def("MutatorIsAllowed", &AMutator::MutatorIsAllowed)
        .def("eventPreBeginPlay", &AMutator::eventPreBeginPlay)
          ;
}