#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeFeatherBlend(py::module &m)
{
    py::class_< UWillowAnimNodeFeatherBlend,  UAnimNodeBlend   >(m, "UWillowAnimNodeFeatherBlend")
        .def_readwrite("BoneBlendTargets", &UWillowAnimNodeFeatherBlend::BoneBlendTargets)
        .def_readwrite("Child2PerBoneWeight", &UWillowAnimNodeFeatherBlend::Child2PerBoneWeight)
        .def_readwrite("LocalToCompReqBones", &UWillowAnimNodeFeatherBlend::LocalToCompReqBones)
        .def("SetBlendTarget", &UWillowAnimNodeFeatherBlend::SetBlendTarget)
          ;
}