#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPersistentMapDependencies(py::object m)
{
    py::class_< FPersistentMapDependencies >(m, "FPersistentMapDependencies")
        .def_readwrite("PersistentMap", &FPersistentMapDependencies::PersistentMap)
        .def_readwrite("SecondaryMaps", &FPersistentMapDependencies::SecondaryMaps)
        .def_readwrite("ConnectedPersistents", &FPersistentMapDependencies::ConnectedPersistents)
        .def_readwrite("LevelName", &FPersistentMapDependencies::LevelName)
        .def_readwrite("GameReleaseDef", &FPersistentMapDependencies::GameReleaseDef)
        .def_readwrite("DiscoveryAchievements", &FPersistentMapDependencies::DiscoveryAchievements)
  ;
}