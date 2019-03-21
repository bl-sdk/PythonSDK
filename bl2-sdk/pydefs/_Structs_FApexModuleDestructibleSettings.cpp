#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FApexModuleDestructibleSettings()
{
    class_< FApexModuleDestructibleSettings >("FApexModuleDestructibleSettings", no_init)
        .def_readwrite("MaxChunkIslandCount", &FApexModuleDestructibleSettings::MaxChunkIslandCount)
        .def_readwrite("MaxRrbActorCount", &FApexModuleDestructibleSettings::MaxRrbActorCount)
        .def_readwrite("MaxChunkSeparationLOD", &FApexModuleDestructibleSettings::MaxChunkSeparationLOD)
  ;
}