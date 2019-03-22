#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_LeapAtTarget(py::module &m)
{
    py::class_< UAction_LeapAtTarget,  UAction_BasicAttack   >(m, "UAction_LeapAtTarget")
        .def_readwrite("Options", &UAction_LeapAtTarget::Options)
        .def_readwrite("LaunchAnimation", &UAction_LeapAtTarget::LaunchAnimation)
        .def_readwrite("LandAnimation", &UAction_LeapAtTarget::LandAnimation)
        .def_readwrite("InAirAttackIdleAnimation", &UAction_LeapAtTarget::InAirAttackIdleAnimation)
        .def("LandFinished", &UAction_LeapAtTarget::LandFinished)
        .def("PlayLand", &UAction_LeapAtTarget::PlayLand)
        .def("PlayIdle", &UAction_LeapAtTarget::PlayIdle)
        .def("PlayLaunch", &UAction_LeapAtTarget::PlayLaunch)
        .def("eventActivateEvent", &UAction_LeapAtTarget::eventActivateEvent)
        .def("TargetTooFar", &UAction_LeapAtTarget::TargetTooFar)
        .def("eventCanRun", &UAction_LeapAtTarget::eventCanRun)
          ;
}