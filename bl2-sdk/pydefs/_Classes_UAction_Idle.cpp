#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_Idle()
{
    class_< UAction_Idle, bases< UAction_Burrow >  , boost::noncopyable>("UAction_Idle", no_init)
        .def_readwrite("IdleTime", &UAction_Idle::IdleTime)
        .def_readwrite("CloakBehavior", &UAction_Idle::CloakBehavior)
        .def_readwrite("FollowType", &UAction_Idle::FollowType)
        .def_readwrite("DistMin", &UAction_Idle::DistMin)
        .def_readwrite("DistMax", &UAction_Idle::DistMax)
        .def_readwrite("CheckRate", &UAction_Idle::CheckRate)
        .def("StaticClass", &UAction_Idle::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckStateTransition", &UAction_Idle::CheckStateTransition)
        .def("ShouldPathToTarget", &UAction_Idle::ShouldPathToTarget)
        .def("GetGoalActor", &UAction_Idle::GetGoalActor, return_value_policy< reference_existing_object >())
        .def("IdleFinished", &UAction_Idle::IdleFinished)
        .def("eventStop", &UAction_Idle::eventStop)
        .def("eventStart", &UAction_Idle::eventStart)
        .def("eventCanRun", &UAction_Idle::eventCanRun)
        .staticmethod("StaticClass")
  ;
}