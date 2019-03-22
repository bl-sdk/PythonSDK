#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelDependencyList(py::module &m)
{
    py::class_< ULevelDependencyList,  UGBXDefinition   >(m, "ULevelDependencyList")
        .def_readwrite("LoaderMap", &ULevelDependencyList::LoaderMap)
        .def_readwrite("LevelList", &ULevelDependencyList::LevelList)
        .def_readwrite("LevelWorldDiscoveryStatID", &ULevelDependencyList::LevelWorldDiscoveryStatID)
        .def_readwrite("TotalNumWorldDiscoveryAreas", &ULevelDependencyList::TotalNumWorldDiscoveryAreas)
        .def_readwrite("AllAreasDiscoveredAchievement", &ULevelDependencyList::AllAreasDiscoveredAchievement)
        .def("GetFriendlyLevelNameFromMapName", &ULevelDependencyList::GetFriendlyLevelNameFromMapName)
          ;
}