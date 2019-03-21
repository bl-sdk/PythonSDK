#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelMeshComponentLODInfo()
{
    py::class_< FSkelMeshComponentLODInfo >("FSkelMeshComponentLODInfo")
        .def_readwrite("HiddenMaterials", &FSkelMeshComponentLODInfo::HiddenMaterials)
        .def_readwrite("InstanceWeightUsage", &FSkelMeshComponentLODInfo::InstanceWeightUsage)
        .def_readwrite("InstanceWeightIdx", &FSkelMeshComponentLODInfo::InstanceWeightIdx)
  ;
}