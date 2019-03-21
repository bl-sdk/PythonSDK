#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInstancedStaticMeshMappingInfo()
{
    class_< FInstancedStaticMeshMappingInfo >("FInstancedStaticMeshMappingInfo", no_init)
        .def_readwrite("Mapping", &FInstancedStaticMeshMappingInfo::Mapping)
        .def_readwrite("LightMap", &FInstancedStaticMeshMappingInfo::LightMap)
        .def_readwrite("LightmapTexture", &FInstancedStaticMeshMappingInfo::LightmapTexture)
        .def_readwrite("ShadowmapTexture", &FInstancedStaticMeshMappingInfo::ShadowmapTexture)
  ;
}