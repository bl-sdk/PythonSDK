#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkelMeshComponentLODInfo()
{
    class_< FSkelMeshComponentLODInfo >("FSkelMeshComponentLODInfo", no_init)
        .def_readwrite("HiddenMaterials", &FSkelMeshComponentLODInfo::HiddenMaterials)
        .def_readwrite("InstanceWeightUsage", &FSkelMeshComponentLODInfo::InstanceWeightUsage)
        .def_readwrite("InstanceWeightIdx", &FSkelMeshComponentLODInfo::InstanceWeightIdx)
  ;
}