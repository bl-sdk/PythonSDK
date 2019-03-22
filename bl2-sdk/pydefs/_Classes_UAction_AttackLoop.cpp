#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_AttackLoop(py::module &m)
{
    py::class_< UAction_AttackLoop,  UAction_BasicAttack   >(m, "UAction_AttackLoop")
        .def_readwrite("LoopCount", &UAction_AttackLoop::LoopCount)
        .def_readwrite("StartSMD", &UAction_AttackLoop::StartSMD)
        .def_readwrite("StopSMD", &UAction_AttackLoop::StopSMD)
        .def_readwrite("LoopSMD", &UAction_AttackLoop::LoopSMD)
        .def_readwrite("LoopCondition", &UAction_AttackLoop::LoopCondition)
        .def_readwrite("NumLoops", &UAction_AttackLoop::NumLoops)
        .def_readwrite("MaxLoops", &UAction_AttackLoop::MaxLoops)
        .def("PlayAnim", &UAction_AttackLoop::PlayAnim)
          ;
}