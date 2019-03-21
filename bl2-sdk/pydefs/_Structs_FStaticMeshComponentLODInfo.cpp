#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStaticMeshComponentLODInfo()
{
    py::class_< FStaticMeshComponentLODInfo >("FStaticMeshComponentLODInfo")
        .def_readwrite("ShadowMaps", &FStaticMeshComponentLODInfo::ShadowMaps)
        .def_readwrite("ShadowVertexBuffers", &FStaticMeshComponentLODInfo::ShadowVertexBuffers)
        .def_readwrite("LightMap", &FStaticMeshComponentLODInfo::LightMap)
        .def_readwrite("OverrideVertexColors", &FStaticMeshComponentLODInfo::OverrideVertexColors)
  ;
}