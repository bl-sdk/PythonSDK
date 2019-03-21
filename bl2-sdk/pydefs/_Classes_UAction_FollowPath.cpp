#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_FollowPath()
{
    py::class_< UAction_FollowPath,  UWillowActionSequencePawn   >("UAction_FollowPath")
        .def_readwrite("PerchData", &UAction_FollowPath::PerchData)
        .def_readwrite("MoveNode", &UAction_FollowPath::MoveNode)
        .def_readwrite("NextNode", &UAction_FollowPath::NextNode)
        .def_readwrite("LastPathFailTime", &UAction_FollowPath::LastPathFailTime)
        .def_readwrite("TimeToStopLooping", &UAction_FollowPath::TimeToStopLooping)
        .def_readwrite("BurrowEnter", &UAction_Burrow::BurrowEnter)
        .def_readwrite("BurrowExit", &UAction_Burrow::BurrowExit)
        .def("StaticClass", &UAction_FollowPath::StaticClass, py::return_value_policy::reference)
        .def("PathAttemptFinished", &UAction_FollowPath::PathAttemptFinished)
        .def("PerchStop", &UAction_FollowPath::PerchStop)
        .def("PerchDone", &UAction_FollowPath::PerchDone)
        .def("PerchPlayStop", &UAction_FollowPath::PerchPlayStop)
        .def("PerchPlayLoop", &UAction_FollowPath::PerchPlayLoop)
        .def("PerchPlayIdle", &UAction_FollowPath::PerchPlayIdle)
        .def("PerchStart", &UAction_FollowPath::PerchStart)
        .def("GetPerchConsumerHandle", &UAction_FollowPath::GetPerchConsumerHandle)
        .def("SetPerch", &UAction_FollowPath::SetPerch)
        .def("SpecialMoveCallback", &UAction_FollowPath::SpecialMoveCallback)
        .def("SetSpecialMoves", &UAction_FollowPath::SetSpecialMoves)
        .def("MoveTimerCallback", &UAction_FollowPath::MoveTimerCallback)
        .def("SetMoveTimer", &UAction_FollowPath::SetMoveTimer)
        .def("eventStop", &UAction_FollowPath::eventStop)
        .def("SetMoveNode", &UAction_FollowPath::SetMoveNode)
        .def("GetMoveNode", &UAction_FollowPath::GetMoveNode, py::return_value_policy::reference)
        .def("SetMoveFacingPolicy", &UAction_FollowPath::SetMoveFacingPolicy)
        .def("SetMoveNodeSpeed", &UAction_FollowPath::SetMoveNodeSpeed)
        .def("CheckCloaked", &UAction_Burrow::CheckCloaked)
        .def("SafeToUncloak", &UAction_Burrow::SafeToUncloak)
        .def("ForceUncloak", &UAction_Burrow::ForceUncloak)
        .def("ForceCloak", &UAction_Burrow::ForceCloak)
        .def("CheckStateTransition", &UAction_Burrow::CheckStateTransition)
        .def("eventStart", &UAction_Burrow::eventStart)
        .staticmethod("StaticClass")
  ;
}