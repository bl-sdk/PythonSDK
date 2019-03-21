#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkeletalMeshLODInfo(py::object m)
{
    py::class_< FSkeletalMeshLODInfo >(m, "FSkeletalMeshLODInfo")
        .def_readwrite("DisplayFactor", &FSkeletalMeshLODInfo::DisplayFactor)
        .def_readwrite("LODHysteresis", &FSkeletalMeshLODInfo::LODHysteresis)
        .def_readwrite("LODMaterialMap", &FSkeletalMeshLODInfo::LODMaterialMap)
        .def_readwrite("bEnableShadowCasting", &FSkeletalMeshLODInfo::bEnableShadowCasting)
        .def_readwrite("TriangleSorting", &FSkeletalMeshLODInfo::TriangleSorting)
        .def_readwrite("TriangleSortSettings", &FSkeletalMeshLODInfo::TriangleSortSettings)
  ;
}