#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowRadarManager(py::module &m)
{
    py::class_< AWillowRadarManager,  AActor   >(m, "AWillowRadarManager")
		.def_static("StaticClass", &AWillowRadarManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NumberOfDynamicIcons", &AWillowRadarManager::NumberOfDynamicIcons)
        .def("eventPostBeginPlay", &AWillowRadarManager::eventPostBeginPlay)
        .def("RemoveSkillStation", &AWillowRadarManager::RemoveSkillStation)
        .def("AddSkillStation", &AWillowRadarManager::AddSkillStation)
        .def("RemoveDynamicIcon", &AWillowRadarManager::RemoveDynamicIcon)
        .def("AddDynamicIcon", &AWillowRadarManager::AddDynamicIcon)
          ;
}