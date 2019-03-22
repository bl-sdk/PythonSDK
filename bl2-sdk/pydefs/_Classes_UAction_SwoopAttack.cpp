#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_SwoopAttack(py::module &m)
{
    py::class_< UAction_SwoopAttack,  UWillowActionSequencePawn   >(m, "UAction_SwoopAttack")
        .def_readwrite("SwoopFarDistance", &UAction_SwoopAttack::SwoopFarDistance)
        .def_readwrite("SwoopFarHeight", &UAction_SwoopAttack::SwoopFarHeight)
        .def_readwrite("SwoopCloseDistance", &UAction_SwoopAttack::SwoopCloseDistance)
        .def_readwrite("SwoopCloseHeight", &UAction_SwoopAttack::SwoopCloseHeight)
        .def_readwrite("SwoopAttackDistance", &UAction_SwoopAttack::SwoopAttackDistance)
        .def_readwrite("SwoopAttackDistances", &UAction_SwoopAttack::SwoopAttackDistances)
        .def_readwrite("Offset", &UAction_SwoopAttack::Offset)
        .def_readwrite("OffsetDirection", &UAction_SwoopAttack::OffsetDirection)
        .def_readwrite("Direction", &UAction_SwoopAttack::Direction)
        .def_readwrite("AttackOffset", &UAction_SwoopAttack::AttackOffset)
        .def_readwrite("ClosestAttackDist", &UAction_SwoopAttack::ClosestAttackDist)
        .def_readwrite("LastAttackLocation", &UAction_SwoopAttack::LastAttackLocation)
        .def_readwrite("CachedTargetLoc", &UAction_SwoopAttack::CachedTargetLoc)
        .def("GetDistToGoal", &UAction_SwoopAttack::GetDistToGoal)
        .def("GetGoalLocation", &UAction_SwoopAttack::GetGoalLocation)
        .def("SetAllTriggered", &UAction_SwoopAttack::SetAllTriggered)
        .def("GetDistToTarget", &UAction_SwoopAttack::GetDistToTarget)
        .def("eventPathFind", &UAction_SwoopAttack::eventPathFind)
        .def("eventStop", &UAction_SwoopAttack::eventStop)
        .def("eventStart", &UAction_SwoopAttack::eventStart)
        .def("eventCanRun", &UAction_SwoopAttack::eventCanRun)
        .def("eventInit", &UAction_SwoopAttack::eventInit)
          ;
}