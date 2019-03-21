#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInstancedStaticMeshMappingInfo()
{
    py::class_< FInstancedStaticMeshMappingInfo >("FInstancedStaticMeshMappingInfo")
        .def_readwrite("Mapping", &FInstancedStaticMeshMappingInfo::Mapping)
        .def_readwrite("LightMap", &FInstancedStaticMeshMappingInfo::LightMap)
        .def_readwrite("LightmapTexture", &FInstancedStaticMeshMappingInfo::LightmapTexture)
        .def_readwrite("ShadowmapTexture", &FInstancedStaticMeshMappingInfo::ShadowmapTexture)
  ;
}