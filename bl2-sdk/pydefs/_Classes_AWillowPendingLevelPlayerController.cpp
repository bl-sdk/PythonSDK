#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowPendingLevelPlayerController()
{
    class_< AWillowPendingLevelPlayerController, bases< AWillowPlayerController >  , boost::noncopyable>("AWillowPendingLevelPlayerController", no_init)
        .def("StaticClass", &AWillowPendingLevelPlayerController::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleSignInChange", &AWillowPendingLevelPlayerController::HandleSignInChange)
        .def("eventGetLoginStatus", &AWillowPendingLevelPlayerController::eventGetLoginStatus)
        .def("ClearPlayerStandIn", &AWillowPendingLevelPlayerController::ClearPlayerStandIn)
        .def("GetPlayerStandIn", &AWillowPendingLevelPlayerController::GetPlayerStandIn, return_value_policy< reference_existing_object >())
        .def("GenericPlayerInitialization", &AWillowPendingLevelPlayerController::GenericPlayerInitialization)
        .def("eventDestroyed", &AWillowPendingLevelPlayerController::eventDestroyed)
        .def("PostBeginPlay", &AWillowPendingLevelPlayerController::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}