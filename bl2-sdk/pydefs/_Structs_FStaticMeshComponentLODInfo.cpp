#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStaticMeshComponentLODInfo()
{
    class_< FStaticMeshComponentLODInfo >("FStaticMeshComponentLODInfo", no_init)
        .def_readwrite("ShadowMaps", &FStaticMeshComponentLODInfo::ShadowMaps)
        .def_readwrite("ShadowVertexBuffers", &FStaticMeshComponentLODInfo::ShadowVertexBuffers)
        .def_readwrite("LightMap", &FStaticMeshComponentLODInfo::LightMap)
        .def_readwrite("OverrideVertexColors", &FStaticMeshComponentLODInfo::OverrideVertexColors)
  ;
}