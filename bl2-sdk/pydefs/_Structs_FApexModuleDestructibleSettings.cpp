#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FApexModuleDestructibleSettings(py::module &m)
{
    py::class_< FApexModuleDestructibleSettings >(m, "FApexModuleDestructibleSettings")
        .def_readwrite("MaxChunkIslandCount", &FApexModuleDestructibleSettings::MaxChunkIslandCount)
        .def_readwrite("MaxRrbActorCount", &FApexModuleDestructibleSettings::MaxRrbActorCount)
        .def_readwrite("MaxChunkSeparationLOD", &FApexModuleDestructibleSettings::MaxChunkSeparationLOD)
  ;
}