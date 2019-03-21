#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FChildBoneBlendInfo()
{
    class_< FChildBoneBlendInfo >("FChildBoneBlendInfo", no_init)
        .def_readwrite("TargetPerBoneWeight", &FChildBoneBlendInfo::TargetPerBoneWeight)
        .def_readwrite("InitTargetStartBone", &FChildBoneBlendInfo::InitTargetStartBone)
        .def_readwrite("InitPerBoneIncrease", &FChildBoneBlendInfo::InitPerBoneIncrease)
        .def_readwrite("OldStartBone", &FChildBoneBlendInfo::OldStartBone)
        .def_readwrite("OldBoneIncrease", &FChildBoneBlendInfo::OldBoneIncrease)
        .def_readwrite("TargetRequiredBones", &FChildBoneBlendInfo::TargetRequiredBones)
  ;
}