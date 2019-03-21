#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMutator()
{
    class_< AMutator, bases< AInfo >  , boost::noncopyable>("AMutator", no_init)
        .def_readwrite("NextMutator", &AMutator::NextMutator)
        .def_readwrite("GroupNames", &AMutator::GroupNames)
        .def("StaticClass", &AMutator::StaticClass, return_value_policy< reference_existing_object >())
        .def("NetDamage", &AMutator::NetDamage)
        .def("ScoreKill", &AMutator::ScoreKill)
        .def("ScoreObjective", &AMutator::ScoreObjective)
        .def("PreventDeath", &AMutator::PreventDeath)
        .def("OverridePickupQuery", &AMutator::OverridePickupQuery)
        .def("CheckEndGame", &AMutator::CheckEndGame)
        .def("HandleRestartGame", &AMutator::HandleRestartGame)
        .def("FindPlayerStart", &AMutator::FindPlayerStart, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}