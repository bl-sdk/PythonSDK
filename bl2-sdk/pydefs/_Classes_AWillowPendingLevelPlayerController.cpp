#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPendingLevelPlayerController(py::module &m)
{
    py::class_< AWillowPendingLevelPlayerController,  AWillowPlayerController   >(m, "AWillowPendingLevelPlayerController")
		.def_static("StaticClass", &AWillowPendingLevelPlayerController::StaticClass, py::return_value_policy::reference)
        .def("HandleSignInChange", &AWillowPendingLevelPlayerController::HandleSignInChange)
        .def("eventGetLoginStatus", &AWillowPendingLevelPlayerController::eventGetLoginStatus)
        .def("ClearPlayerStandIn", &AWillowPendingLevelPlayerController::ClearPlayerStandIn)
        .def("GetPlayerStandIn", &AWillowPendingLevelPlayerController::GetPlayerStandIn, py::return_value_policy::reference)
        .def("GenericPlayerInitialization", &AWillowPendingLevelPlayerController::GenericPlayerInitialization)
        .def("eventDestroyed", &AWillowPendingLevelPlayerController::eventDestroyed)
        .def("PostBeginPlay", &AWillowPendingLevelPlayerController::PostBeginPlay)
          ;
}