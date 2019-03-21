#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPerBoneMaskInfo()
{
    class_< FPerBoneMaskInfo >("FPerBoneMaskInfo", no_init)
        .def_readwrite("BranchList", &FPerBoneMaskInfo::BranchList)
        .def_readwrite("DesiredWeight", &FPerBoneMaskInfo::DesiredWeight)
        .def_readwrite("BlendTimeToGo", &FPerBoneMaskInfo::BlendTimeToGo)
        .def_readwrite("WeightRuleList", &FPerBoneMaskInfo::WeightRuleList)
        .def_readwrite("PerBoneWeights", &FPerBoneMaskInfo::PerBoneWeights)
        .def_readwrite("TransformReqBone", &FPerBoneMaskInfo::TransformReqBone)
        .def_readwrite("TransformReqBoneIndex", &FPerBoneMaskInfo::TransformReqBoneIndex)
  ;
}