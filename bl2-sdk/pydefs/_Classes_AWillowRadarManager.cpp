#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowRadarManager()
{
    class_< AWillowRadarManager, bases< AActor >  , boost::noncopyable>("AWillowRadarManager", no_init)
        .def_readonly("DefaultIconLifeTime", &AWillowRadarManager::DefaultIconLifeTime)
        .def_readwrite("NumberOfDynamicIcons", &AWillowRadarManager::NumberOfDynamicIcons)
        .def_readonly("ServerDynamicIcons", &AWillowRadarManager::ServerDynamicIcons)
        .def_readonly("SkillStations", &AWillowRadarManager::SkillStations)
        .def_readonly("RemoteDynamicIcons", &AWillowRadarManager::RemoteDynamicIcons)
        .def_readonly("SkillStationLocations", &AWillowRadarManager::SkillStationLocations)
        .def("StaticClass", &AWillowRadarManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPostBeginPlay", &AWillowRadarManager::eventPostBeginPlay)
        .def("RemoveSkillStation", &AWillowRadarManager::RemoveSkillStation)
        .def("AddSkillStation", &AWillowRadarManager::AddSkillStation)
        .def("RemoveDynamicIcon", &AWillowRadarManager::RemoveDynamicIcon)
        .def("AddDynamicIcon", &AWillowRadarManager::AddDynamicIcon)
        .staticmethod("StaticClass")
  ;
}