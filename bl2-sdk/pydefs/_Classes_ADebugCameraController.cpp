#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADebugCameraController(py::object m)
{
    py::class_< ADebugCameraController,  APlayerController   >(m, "ADebugCameraController")
        .def_readwrite("PrimaryKey", &ADebugCameraController::PrimaryKey)
        .def_readwrite("SecondaryKey", &ADebugCameraController::SecondaryKey)
        .def_readwrite("UnselectKey", &ADebugCameraController::UnselectKey)
        .def_readwrite("OryginalControllerRef", &ADebugCameraController::OryginalControllerRef)
        .def_readwrite("OryginalPlayer", &ADebugCameraController::OryginalPlayer)
        .def_readwrite("DrawFrustum", &ADebugCameraController::DrawFrustum)
        .def_readwrite("SelectedActor", &ADebugCameraController::SelectedActor)
        .def_readwrite("SelectedComponent", &ADebugCameraController::SelectedComponent)
        .def("StaticClass", &ADebugCameraController::StaticClass, py::return_value_policy::reference)
        .def("ConsoleCommand", &ADebugCameraController::ConsoleCommand)
        .def("ShowDebugSelectedInfo", &ADebugCameraController::ShowDebugSelectedInfo)
        .def("NativeInputKey", &ADebugCameraController::NativeInputKey)
        .def("DisableDebugCamera", &ADebugCameraController::DisableDebugCamera)
        .def("NormalSpeed", &ADebugCameraController::NormalSpeed)
        .def("MoreSpeed", &ADebugCameraController::MoreSpeed)
        .def("SetFreezeRendering", &ADebugCameraController::SetFreezeRendering)
        .def("OnDeactivate", &ADebugCameraController::OnDeactivate)
        .def("OnActivate", &ADebugCameraController::OnActivate)
        .def("eventPostBeginPlay", &ADebugCameraController::eventPostBeginPlay)
        .def("Unselect", &ADebugCameraController::Unselect)
        .def("SecondarySelect", &ADebugCameraController::SecondarySelect)
        .def("PrimarySelect", &ADebugCameraController::PrimarySelect)
          ;
}