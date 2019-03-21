#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FChildBoneBlendInfo(py::object m)
{
    py::class_< FChildBoneBlendInfo >(m, "FChildBoneBlendInfo")
        .def_readwrite("TargetPerBoneWeight", &FChildBoneBlendInfo::TargetPerBoneWeight)
        .def_readwrite("InitTargetStartBone", &FChildBoneBlendInfo::InitTargetStartBone)
        .def_readwrite("InitPerBoneIncrease", &FChildBoneBlendInfo::InitPerBoneIncrease)
        .def_readwrite("OldStartBone", &FChildBoneBlendInfo::OldStartBone)
        .def_readwrite("OldBoneIncrease", &FChildBoneBlendInfo::OldBoneIncrease)
        .def_readwrite("TargetRequiredBones", &FChildBoneBlendInfo::TargetRequiredBones)
  ;
}