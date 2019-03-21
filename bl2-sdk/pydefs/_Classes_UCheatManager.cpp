#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCheatManager()
{
    py::class_< UCheatManager,  UObject   >("UCheatManager")
        .def_readwrite("DebugCameraControllerRef", &UCheatManager::DebugCameraControllerRef)
        .def_readwrite("DebugCameraControllerClass", &UCheatManager::DebugCameraControllerClass)
        .def_readwrite("ViewingFrom", &UCheatManager::ViewingFrom)
        .def_readwrite("OwnCamera", &UCheatManager::OwnCamera)
        .def("StaticClass", &UCheatManager::StaticClass, py::return_value_policy::reference)
        .def("ToggleAssertOnGBXCheck", &UCheatManager::ToggleAssertOnGBXCheck)
        .def("SetGBXCheckDisplayDuration", &UCheatManager::SetGBXCheckDisplayDuration)
        .def("SetNumberOfDebugMessages", &UCheatManager::SetNumberOfDebugMessages)
        .def("EnableDebugMessages", &UCheatManager::EnableDebugMessages)
        .def("DisableDebugMessages", &UCheatManager::DisableDebugMessages)
        .def("BehaviorDebug", &UCheatManager::BehaviorDebug)
        .def("DumpCoverStats", &UCheatManager::DumpCoverStats)
        .def("ToggleAILogging", &UCheatManager::ToggleAILogging)
        .def("VerifyNavMeshCoverRefs", &UCheatManager::VerifyNavMeshCoverRefs)
        .def("PrintNavMeshObstacles", &UCheatManager::PrintNavMeshObstacles)
        .def("PrintAllPathObjectEdges", &UCheatManager::PrintAllPathObjectEdges)
        .def("NavMeshVerification", &UCheatManager::NavMeshVerification)
        .def("DrawUnsupportingEdges", &UCheatManager::DrawUnsupportingEdges)
        .def("VerifyNavMeshObjects", &UCheatManager::VerifyNavMeshObjects)
        .def("LogParticleActivateSystemCalls", &UCheatManager::LogParticleActivateSystemCalls)
        .def("LogPlaySoundCalls", &UCheatManager::LogPlaySoundCalls)
        .def("InitCheatManager", &UCheatManager::InitCheatManager)
        .staticmethod("StaticClass")
  ;
}