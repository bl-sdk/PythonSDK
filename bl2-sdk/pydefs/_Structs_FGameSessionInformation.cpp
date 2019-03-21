#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameSessionInformation(py::object m)
{
    py::class_< FGameSessionInformation >(m, "FGameSessionInformation")
        .def_readwrite("AppTitleID", &FGameSessionInformation::AppTitleID)
        .def_readwrite("PlatformType", &FGameSessionInformation::PlatformType)
        .def_readwrite("Language", &FGameSessionInformation::Language)
        .def_readwrite("GameplaySessionTimestamp", &FGameSessionInformation::GameplaySessionTimestamp)
        .def_readwrite("GameplaySessionStartTime", &FGameSessionInformation::GameplaySessionStartTime)
        .def_readwrite("GameplaySessionEndTime", &FGameSessionInformation::GameplaySessionEndTime)
        .def_readwrite("GameplaySessionID", &FGameSessionInformation::GameplaySessionID)
        .def_readwrite("GameClassName", &FGameSessionInformation::GameClassName)
        .def_readwrite("MapName", &FGameSessionInformation::MapName)
        .def_readwrite("MapURL", &FGameSessionInformation::MapURL)
        .def_readwrite("SessionInstance", &FGameSessionInformation::SessionInstance)
        .def_readwrite("GameTypeId", &FGameSessionInformation::GameTypeId)
        .def_readwrite("OwningNetId", &FGameSessionInformation::OwningNetId)
        .def_readwrite("PlaylistId", &FGameSessionInformation::PlaylistId)
  ;
}