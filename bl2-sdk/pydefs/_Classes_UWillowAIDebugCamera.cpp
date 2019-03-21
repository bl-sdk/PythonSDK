#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIDebugCamera(py::object m)
{
    py::class_< UWillowAIDebugCamera,  UAIDebugCamera   >(m, "UWillowAIDebugCamera")
        .def_readwrite("Dummies", &UWillowAIDebugCamera::Dummies)
        .def_readwrite("AIDebugDummyClass", &UWillowAIDebugCamera::AIDebugDummyClass)
        .def_readwrite("NumDummies", &UWillowAIDebugCamera::NumDummies)
        .def("StaticClass", &UWillowAIDebugCamera::StaticClass, py::return_value_policy::reference)
        .def("ToggleAccuracyDebug", &UWillowAIDebugCamera::ToggleAccuracyDebug)
        .def("ToggleWillowInspectorStats", &UWillowAIDebugCamera::ToggleWillowInspectorStats)
        .def("ToggleTerritoryZones", &UWillowAIDebugCamera::ToggleTerritoryZones)
        .def("ToggleAIShowNodeReservation", &UWillowAIDebugCamera::ToggleAIShowNodeReservation)
        .def("SetRuleEngine", &UWillowAIDebugCamera::SetRuleEngine)
        .def("InitDummies", &UWillowAIDebugCamera::InitDummies)
        .def("SetPrevSnapshot", &UWillowAIDebugCamera::SetPrevSnapshot)
        .def("SetNextSnapshot", &UWillowAIDebugCamera::SetNextSnapshot)
        .def("NotifyGameUnPaused", &UWillowAIDebugCamera::NotifyGameUnPaused)
        .def("NotifyGamePaused", &UWillowAIDebugCamera::NotifyGamePaused)
          ;
}