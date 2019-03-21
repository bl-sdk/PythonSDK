#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_Patrol()
{
    class_< UAction_Patrol, bases< UAction_FollowPath >  , boost::noncopyable>("UAction_Patrol", no_init)
        .def_readwrite("TimeBetweenPatrolMovement", &UAction_Patrol::TimeBetweenPatrolMovement)
        .def_readwrite("TimeOfNextRandomPatrol", &UAction_Patrol::TimeOfNextRandomPatrol)
        .def_readwrite("HideLocation", &UAction_Patrol::HideLocation)
        .def_readwrite("HideLimits", &UAction_Patrol::HideLimits)
        .def("StaticClass", &UAction_Patrol::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckFullyBlocked", &UAction_Patrol::CheckFullyBlocked)
        .def("GetRandomHomeLocation", &UAction_Patrol::GetRandomHomeLocation)
        .def("SetMoveNode", &UAction_Patrol::SetMoveNode)
        .def("GetMoveNode", &UAction_Patrol::GetMoveNode, return_value_policy< reference_existing_object >())
        .def("SetMoveNodeSpeed", &UAction_Patrol::SetMoveNodeSpeed)
        .def("SetMoveFacingPolicy", &UAction_Patrol::SetMoveFacingPolicy)
        .def("ShowDesignError", &UAction_Patrol::ShowDesignError)
        .def("CheckStateTransition", &UAction_Patrol::CheckStateTransition)
        .def("GetPatrolState", &UAction_Patrol::GetPatrolState)
        .def("eventStop", &UAction_Patrol::eventStop)
        .def("eventStart", &UAction_Patrol::eventStart)
        .def("eventScriptCleanUp", &UAction_Patrol::eventScriptCleanUp)
        .staticmethod("StaticClass")
  ;
}