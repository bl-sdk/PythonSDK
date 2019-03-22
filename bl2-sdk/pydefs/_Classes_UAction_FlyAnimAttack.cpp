#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_FlyAnimAttack(py::module &m)
{
    py::class_< UAction_FlyAnimAttack,  UAction_Burrow   >(m, "UAction_FlyAnimAttack")
        .def_readwrite("AimType", &UAction_FlyAnimAttack::AimType)
        .def_readwrite("VisionAngle", &UAction_FlyAnimAttack::VisionAngle)
        .def_readwrite("Range", &UAction_FlyAnimAttack::Range)
        .def_readwrite("AttackAnim", &UAction_FlyAnimAttack::AttackAnim)
        .def_readwrite("CheckRate", &UAction_FlyAnimAttack::CheckRate)
        .def_readwrite("Aim", &UAction_FlyAnimAttack::Aim)
        .def_readwrite("ActualRange", &UAction_FlyAnimAttack::ActualRange)
        .def("ValidAttackLoc", &UAction_FlyAnimAttack::ValidAttackLoc)
        .def("GetAttackLoc", &UAction_FlyAnimAttack::GetAttackLoc)
        .def("IsAimed", &UAction_FlyAnimAttack::IsAimed)
        .def("GetDotToTarget", &UAction_FlyAnimAttack::GetDotToTarget)
        .def("AttackFinished", &UAction_FlyAnimAttack::AttackFinished)
        .def("CheckStateTransition", &UAction_FlyAnimAttack::CheckStateTransition)
        .def("GetDesiredState", &UAction_FlyAnimAttack::GetDesiredState)
        .def("eventActivateEvent", &UAction_FlyAnimAttack::eventActivateEvent)
        .def("eventStop", &UAction_FlyAnimAttack::eventStop)
        .def("eventStart", &UAction_FlyAnimAttack::eventStart)
        .def("eventCanRun", &UAction_FlyAnimAttack::eventCanRun)
        .def("eventInit", &UAction_FlyAnimAttack::eventInit)
          ;
}