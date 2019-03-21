#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_AttackLoop()
{
    class_< UAction_AttackLoop, bases< UAction_BasicAttack >  , boost::noncopyable>("UAction_AttackLoop", no_init)
        .def_readwrite("LoopCount", &UAction_AttackLoop::LoopCount)
        .def_readwrite("StartSMD", &UAction_AttackLoop::StartSMD)
        .def_readwrite("StopSMD", &UAction_AttackLoop::StopSMD)
        .def_readwrite("LoopSMD", &UAction_AttackLoop::LoopSMD)
        .def_readwrite("LoopCondition", &UAction_AttackLoop::LoopCondition)
        .def_readwrite("NumLoops", &UAction_AttackLoop::NumLoops)
        .def_readwrite("MaxLoops", &UAction_AttackLoop::MaxLoops)
        .def("StaticClass", &UAction_AttackLoop::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayAnim", &UAction_AttackLoop::PlayAnim)
        .staticmethod("StaticClass")
  ;
}