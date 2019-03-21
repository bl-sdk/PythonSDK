#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendPerBone()
{
    py::class_< UAnimNodeBlendPerBone,  UAnimNodeBlend   >("UAnimNodeBlendPerBone")
        .def_readwrite("BranchStartBoneName", &UAnimNodeBlendPerBone::BranchStartBoneName)
        .def_readwrite("Child2PerBoneWeight", &UAnimNodeBlendPerBone::Child2PerBoneWeight)
        .def_readwrite("LocalToCompReqBones", &UAnimNodeBlendPerBone::LocalToCompReqBones)
        .def("StaticClass", &UAnimNodeBlendPerBone::StaticClass, py::return_value_policy::reference)
        .def("SetBlendTarget", &UAnimNodeBlendPerBone::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}