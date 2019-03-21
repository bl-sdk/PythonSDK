#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowRadarManager(py::object m)
{
    py::class_< AWillowRadarManager,  AActor   >(m, "AWillowRadarManager")
        .def_readonly("DefaultIconLifeTime", &AWillowRadarManager::DefaultIconLifeTime)
        .def_readwrite("NumberOfDynamicIcons", &AWillowRadarManager::NumberOfDynamicIcons)
        .def_readonly("ServerDynamicIcons", &AWillowRadarManager::ServerDynamicIcons)
        .def_readonly("SkillStations", &AWillowRadarManager::SkillStations)
        .def_readonly("RemoteDynamicIcons", &AWillowRadarManager::RemoteDynamicIcons)
        .def_readonly("SkillStationLocations", &AWillowRadarManager::SkillStationLocations)
        .def("StaticClass", &AWillowRadarManager::StaticClass, py::return_value_policy::reference)
        .def("eventPostBeginPlay", &AWillowRadarManager::eventPostBeginPlay)
        .def("RemoveSkillStation", &AWillowRadarManager::RemoveSkillStation)
        .def("AddSkillStation", &AWillowRadarManager::AddSkillStation)
        .def("RemoveDynamicIcon", &AWillowRadarManager::RemoveDynamicIcon)
        .def("AddDynamicIcon", &AWillowRadarManager::AddDynamicIcon)
          ;
}