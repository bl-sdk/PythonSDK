#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_CombatPoint()
{
    py::class_< UAction_CombatPoint,  UWillowActionSequencePawn   >("UAction_CombatPoint")
        .def_readwrite("Search", &UAction_CombatPoint::Search)
        .def_readwrite("Limits", &UAction_CoverAttack::Limits)
        .def_readwrite("LineOfSightTime", &UAction_CoverAttack::LineOfSightTime)
        .def_readwrite("MyCover", &UAction_CoverAttack::MyCover)
        .def_readwrite("MyZone", &UAction_CoverAttack::MyZone)
        .def_readwrite("IdleTime", &UAction_CoverAttack::IdleTime)
        .def("StaticClass", &UAction_CombatPoint::StaticClass, py::return_value_policy::reference)
        .def("eventPathFind", &UAction_CoverAttack::eventPathFind)
        .def("CheckExpiredZone", &UAction_CoverAttack::CheckExpiredZone)
        .def("CheckForNewZone", &UAction_CoverAttack::CheckForNewZone)
        .def("FindCover", &UAction_CoverAttack::FindCover)
        .def("ReachedCoverLoc", &UAction_CoverAttack::ReachedCoverLoc)
        .def("IsInCover", &UAction_CoverAttack::IsInCover)
        .def("CoverValid", &UAction_CoverAttack::CoverValid)
        .def("CheckCoverLocation", &UAction_CoverAttack::CheckCoverLocation)
        .def("IsValidCover", &UAction_CoverAttack::IsValidCover)
        .def("CreateCoverList", &UAction_CoverAttack::CreateCoverList)
        .def("GetCoverPoint", &UAction_CoverAttack::GetCoverPoint)
        .def("GetCoverLocation", &UAction_CoverAttack::GetCoverLocation)
        .def("CheckStateTransition", &UAction_CoverAttack::CheckStateTransition)
        .def("eventUpdate", &UAction_CoverAttack::eventUpdate)
        .def("eventStop", &UAction_CoverAttack::eventStop)
        .def("eventStart", &UAction_CoverAttack::eventStart)
        .def("eventCanRun", &UAction_CoverAttack::eventCanRun)
        .def("eventInit", &UAction_CoverAttack::eventInit)
        .def("InitData", &UAction_CoverAttack::InitData)
        .staticmethod("StaticClass")
  ;
}