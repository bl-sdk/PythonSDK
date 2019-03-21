#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPersistentMapDependencies()
{
    class_< FPersistentMapDependencies >("FPersistentMapDependencies", no_init)
        .def_readwrite("PersistentMap", &FPersistentMapDependencies::PersistentMap)
        .def_readwrite("SecondaryMaps", &FPersistentMapDependencies::SecondaryMaps)
        .def_readwrite("ConnectedPersistents", &FPersistentMapDependencies::ConnectedPersistents)
        .def_readwrite("LevelName", &FPersistentMapDependencies::LevelName)
        .def_readwrite("GameReleaseDef", &FPersistentMapDependencies::GameReleaseDef)
        .def_readwrite("DiscoveryAchievements", &FPersistentMapDependencies::DiscoveryAchievements)
  ;
}