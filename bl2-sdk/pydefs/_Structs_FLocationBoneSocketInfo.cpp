#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocationBoneSocketInfo()
{
    py::class_< FLocationBoneSocketInfo >("FLocationBoneSocketInfo")
        .def_readwrite("BoneSocketName", &FLocationBoneSocketInfo::BoneSocketName)
        .def_readwrite("Offset", &FLocationBoneSocketInfo::Offset)
  ;
}