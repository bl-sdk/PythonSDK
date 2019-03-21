#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkeletalMeshLODInfo()
{
    class_< FSkeletalMeshLODInfo >("FSkeletalMeshLODInfo", no_init)
        .def_readwrite("DisplayFactor", &FSkeletalMeshLODInfo::DisplayFactor)
        .def_readwrite("LODHysteresis", &FSkeletalMeshLODInfo::LODHysteresis)
        .def_readwrite("LODMaterialMap", &FSkeletalMeshLODInfo::LODMaterialMap)
        .def_readwrite("bEnableShadowCasting", &FSkeletalMeshLODInfo::bEnableShadowCasting)
        .def_readwrite("TriangleSorting", &FSkeletalMeshLODInfo::TriangleSorting)
        .def_readwrite("TriangleSortSettings", &FSkeletalMeshLODInfo::TriangleSortSettings)
  ;
}