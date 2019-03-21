#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPerBoneMaskInfo(py::object m)
{
    py::class_< FPerBoneMaskInfo >(m, "FPerBoneMaskInfo")
        .def_readwrite("BranchList", &FPerBoneMaskInfo::BranchList)
        .def_readwrite("DesiredWeight", &FPerBoneMaskInfo::DesiredWeight)
        .def_readwrite("BlendTimeToGo", &FPerBoneMaskInfo::BlendTimeToGo)
        .def_readwrite("WeightRuleList", &FPerBoneMaskInfo::WeightRuleList)
        .def_readwrite("PerBoneWeights", &FPerBoneMaskInfo::PerBoneWeights)
        .def_readwrite("TransformReqBone", &FPerBoneMaskInfo::TransformReqBone)
        .def_readwrite("TransformReqBoneIndex", &FPerBoneMaskInfo::TransformReqBoneIndex)
  ;
}