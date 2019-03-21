#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelDependencyList()
{
    class_< ULevelDependencyList, bases< UGBXDefinition >  , boost::noncopyable>("ULevelDependencyList", no_init)
        .def_readwrite("LoaderMap", &ULevelDependencyList::LoaderMap)
        .def_readwrite("LevelList", &ULevelDependencyList::LevelList)
        .def_readwrite("LevelWorldDiscoveryStatID", &ULevelDependencyList::LevelWorldDiscoveryStatID)
        .def_readwrite("TotalNumWorldDiscoveryAreas", &ULevelDependencyList::TotalNumWorldDiscoveryAreas)
        .def_readwrite("AllAreasDiscoveredAchievement", &ULevelDependencyList::AllAreasDiscoveredAchievement)
        .def("StaticClass", &ULevelDependencyList::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFriendlyLevelNameFromMapName", &ULevelDependencyList::GetFriendlyLevelNameFromMapName)
        .staticmethod("StaticClass")
  ;
}