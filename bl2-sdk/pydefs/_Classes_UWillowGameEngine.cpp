#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGameEngine()
{
    class_< UWillowGameEngine, bases< UGearboxEngine >  , boost::noncopyable>("UWillowGameEngine", no_init)
        .def_readwrite("VfTable_ISparkUpdateCallback", &UWillowGameEngine::VfTable_ISparkUpdateCallback)
        .def_readwrite("SourceMapName", &UWillowGameEngine::SourceMapName)
        .def_readwrite("DestMapName", &UWillowGameEngine::DestMapName)
        .def_readwrite("LastNonFakeEntrySourceMapName", &UWillowGameEngine::LastNonFakeEntrySourceMapName)
        .def_readwrite("LevelChangeState", &UWillowGameEngine::LevelChangeState)
        .def_readwrite("FullyLoadedIniPackages", &UWillowGameEngine::FullyLoadedIniPackages)
        .def_readwrite("TimeBetweenCIVTicks", &UWillowGameEngine::TimeBetweenCIVTicks)
        .def_readwrite("LastCIVCheckTime", &UWillowGameEngine::LastCIVCheckTime)
        .def_readwrite("OverlappedCIV", &UWillowGameEngine::OverlappedCIV)
        .def("StaticClass", &UWillowGameEngine::StaticClass, return_value_policy< reference_existing_object >())
        .def("FastTravelIsAccessibleForTime", &UWillowGameEngine::FastTravelIsAccessibleForTime)
        .def("CheckCIV", &UWillowGameEngine::CheckCIV)
        .def("eventGetTransitionLandmark", &UWillowGameEngine::eventGetTransitionLandmark, return_value_policy< reference_existing_object >())
        .def("eventTeleportPlayer", &UWillowGameEngine::eventTeleportPlayer)
        .def("eventUnpauseForLevelLoad", &UWillowGameEngine::eventUnpauseForLevelLoad)
        .def("eventPauseForLevelLoad", &UWillowGameEngine::eventPauseForLevelLoad)
        .def("CanUnpause", &UWillowGameEngine::CanUnpause)
        .staticmethod("StaticClass")
  ;
}