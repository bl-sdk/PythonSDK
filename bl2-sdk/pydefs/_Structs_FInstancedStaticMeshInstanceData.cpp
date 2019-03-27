#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInstancedStaticMeshInstanceData(py::module &m)
{
    py::class_< FInstancedStaticMeshInstanceData >(m, "FInstancedStaticMeshInstanceData")
        .def_readwrite("Transform", &FInstancedStaticMeshInstanceData::Transform)
        .def_readwrite("LightmapUVBias", &FInstancedStaticMeshInstanceData::LightmapUVBias)
        .def_readwrite("ShadowmapUVBias", &FInstancedStaticMeshInstanceData::ShadowmapUVBias)
  ;
}