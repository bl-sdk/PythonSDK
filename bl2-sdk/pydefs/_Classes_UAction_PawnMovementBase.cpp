#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_PawnMovementBase()
{
    class_< UAction_PawnMovementBase, bases< UActionSequencePawn >  , boost::noncopyable>("UAction_PawnMovementBase", no_init)
        .def_readwrite("CachedSearchOrigin", &UAction_PawnMovementBase::CachedSearchOrigin)
        .def_readwrite("CoverCheckThrottle", &UAction_PawnMovementBase::CoverCheckThrottle)
        .def_readwrite("CoverCheckThrottleInterval", &UAction_PawnMovementBase::CoverCheckThrottleInterval)
        .def_readwrite("NewGoalLocation", &UAction_PawnMovementBase::NewGoalLocation)
        .def_readwrite("OneMoveRequest", &UAction_PawnMovementBase::OneMoveRequest)
        .def_readwrite("MoveRequestClass", &UAction_PawnMovementBase::MoveRequestClass)
        .def_readwrite("AttributesToEvaluate", &UAction_PawnMovementBase::AttributesToEvaluate)
        .def_readwrite("AttributeEvalStyle", &UAction_PawnMovementBase::AttributeEvalStyle)
        .def_readwrite("SearchRandomness", &UAction_PawnMovementBase::SearchRandomness)
        .def_readwrite("CoverSearchFilter", &UAction_PawnMovementBase::CoverSearchFilter)
        .def_readwrite("CoverFailureResponse", &UAction_PawnMovementBase::CoverFailureResponse)
        .def_readwrite("RepathOption", &UAction_PawnMovementBase::RepathOption)
        .def_readwrite("SearchOrigin", &UAction_PawnMovementBase::SearchOrigin)
        .def_readwrite("DirectionFromOrigin", &UAction_PawnMovementBase::DirectionFromOrigin)
        .def_readwrite("DirectionCone", &UAction_PawnMovementBase::DirectionCone)
        .def_readwrite("LocationFilterTest", &UAction_PawnMovementBase::LocationFilterTest)
        .def_readwrite("MinDistanceFromOrigin", &UAction_PawnMovementBase::MinDistanceFromOrigin)
        .def_readwrite("MaxDistanceFromOrigin", &UAction_PawnMovementBase::MaxDistanceFromOrigin)
        .def_readwrite("OverrideDistanceForCover", &UAction_PawnMovementBase::OverrideDistanceForCover)
        .def_readwrite("RepathDistanceThresh", &UAction_PawnMovementBase::RepathDistanceThresh)
        .def_readwrite("FailureEvent", &UAction_PawnMovementBase::FailureEvent)
        .def("StaticClass", &UAction_PawnMovementBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostMovement", &UAction_PawnMovementBase::eventPostMovement)
        .def("eventPreMovement", &UAction_PawnMovementBase::eventPreMovement)
        .def("eventPrePathFind", &UAction_PawnMovementBase::eventPrePathFind)
        .def("eventInterruptSequence", &UAction_PawnMovementBase::eventInterruptSequence)
        .def("eventStopSequence", &UAction_PawnMovementBase::eventStopSequence)
        .def("eventStartSequence", &UAction_PawnMovementBase::eventStartSequence)
        .def("MovePawnToDestinationLocation", &UAction_PawnMovementBase::MovePawnToDestinationLocation)
        .def("TakeDebugSnapshotMoveFailure", &UAction_PawnMovementBase::TakeDebugSnapshotMoveFailure)
        .def("SetMaxMovementSpeed", &UAction_PawnMovementBase::SetMaxMovementSpeed)
        .def("EndMovePawnToDestinationLocation", &UAction_PawnMovementBase::EndMovePawnToDestinationLocation)
        .staticmethod("StaticClass")
  ;
}