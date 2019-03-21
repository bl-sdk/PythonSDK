#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInstancedStaticMeshInstanceData()
{
    class_< FInstancedStaticMeshInstanceData >("FInstancedStaticMeshInstanceData", no_init)
        .def_readwrite("Transform", &FInstancedStaticMeshInstanceData::Transform)
        .def_readwrite("LightmapUVBias", &FInstancedStaticMeshInstanceData::LightmapUVBias)
        .def_readwrite("ShadowmapUVBias", &FInstancedStaticMeshInstanceData::ShadowmapUVBias)
  ;
}