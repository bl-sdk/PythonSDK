#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_LeapAtTarget()
{
    class_< UAction_LeapAtTarget, bases< UAction_BasicAttack >  , boost::noncopyable>("UAction_LeapAtTarget", no_init)
        .def_readwrite("Options", &UAction_LeapAtTarget::Options)
        .def_readwrite("LaunchAnimation", &UAction_LeapAtTarget::LaunchAnimation)
        .def_readwrite("LandAnimation", &UAction_LeapAtTarget::LandAnimation)
        .def_readwrite("InAirAttackIdleAnimation", &UAction_LeapAtTarget::InAirAttackIdleAnimation)
        .def("StaticClass", &UAction_LeapAtTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("LandFinished", &UAction_LeapAtTarget::LandFinished)
        .def("PlayLand", &UAction_LeapAtTarget::PlayLand)
        .def("PlayIdle", &UAction_LeapAtTarget::PlayIdle)
        .def("PlayLaunch", &UAction_LeapAtTarget::PlayLaunch)
        .def("eventActivateEvent", &UAction_LeapAtTarget::eventActivateEvent)
        .def("TargetTooFar", &UAction_LeapAtTarget::TargetTooFar)
        .def("eventCanRun", &UAction_LeapAtTarget::eventCanRun)
        .staticmethod("StaticClass")
  ;
}