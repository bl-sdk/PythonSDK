#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeFeatherBlend()
{
    py::class_< UWillowAnimNodeFeatherBlend,  UAnimNodeBlend   >("UWillowAnimNodeFeatherBlend")
        .def_readwrite("BoneBlendTargets", &UWillowAnimNodeFeatherBlend::BoneBlendTargets)
        .def_readwrite("Child2PerBoneWeight", &UWillowAnimNodeFeatherBlend::Child2PerBoneWeight)
        .def_readwrite("LocalToCompReqBones", &UWillowAnimNodeFeatherBlend::LocalToCompReqBones)
        .def("StaticClass", &UWillowAnimNodeFeatherBlend::StaticClass, py::return_value_policy::reference)
        .def("SetBlendTarget", &UWillowAnimNodeFeatherBlend::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}