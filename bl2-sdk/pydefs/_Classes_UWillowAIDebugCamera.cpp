#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIDebugCamera()
{
    class_< UWillowAIDebugCamera, bases< UAIDebugCamera >  , boost::noncopyable>("UWillowAIDebugCamera", no_init)
        .def_readwrite("Dummies", &UWillowAIDebugCamera::Dummies)
        .def_readwrite("AIDebugDummyClass", &UWillowAIDebugCamera::AIDebugDummyClass)
        .def_readwrite("NumDummies", &UWillowAIDebugCamera::NumDummies)
        .def("StaticClass", &UWillowAIDebugCamera::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}