#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGameEngine(py::module &m)
{
    py::class_< UWillowGameEngine,  UGearboxEngine   >(m, "UWillowGameEngine")
        .def_readwrite("VfTable_ISparkUpdateCallback", &UWillowGameEngine::VfTable_ISparkUpdateCallback)
        .def_readwrite("SourceMapName", &UWillowGameEngine::SourceMapName)
        .def_readwrite("DestMapName", &UWillowGameEngine::DestMapName)
        .def_readwrite("LastNonFakeEntrySourceMapName", &UWillowGameEngine::LastNonFakeEntrySourceMapName)
        .def_readwrite("LevelChangeState", &UWillowGameEngine::LevelChangeState)
        .def_readwrite("FullyLoadedIniPackages", &UWillowGameEngine::FullyLoadedIniPackages)
        .def_readwrite("TimeBetweenCIVTicks", &UWillowGameEngine::TimeBetweenCIVTicks)
        .def_readwrite("LastCIVCheckTime", &UWillowGameEngine::LastCIVCheckTime)
        .def_readwrite("OverlappedCIV", &UWillowGameEngine::OverlappedCIV)
        .def("StaticClass", &UWillowGameEngine::StaticClass, py::return_value_policy::reference)
        .def("FastTravelIsAccessibleForTime", &UWillowGameEngine::FastTravelIsAccessibleForTime)
        .def("CheckCIV", &UWillowGameEngine::CheckCIV)
        .def("eventGetTransitionLandmark", &UWillowGameEngine::eventGetTransitionLandmark, py::return_value_policy::reference)
        .def("eventTeleportPlayer", &UWillowGameEngine::eventTeleportPlayer)
        .def("eventUnpauseForLevelLoad", &UWillowGameEngine::eventUnpauseForLevelLoad)
        .def("eventPauseForLevelLoad", &UWillowGameEngine::eventPauseForLevelLoad)
        .def("CanUnpause", &UWillowGameEngine::CanUnpause)
          ;
}