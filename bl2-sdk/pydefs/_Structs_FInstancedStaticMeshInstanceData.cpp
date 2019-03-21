#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInstancedStaticMeshInstanceData()
{
    py::class_< FInstancedStaticMeshInstanceData >("FInstancedStaticMeshInstanceData")
        .def_readwrite("Transform", &FInstancedStaticMeshInstanceData::Transform)
        .def_readwrite("LightmapUVBias", &FInstancedStaticMeshInstanceData::LightmapUVBias)
        .def_readwrite("ShadowmapUVBias", &FInstancedStaticMeshInstanceData::ShadowmapUVBias)
  ;
}