#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_AddCameraBone(py::module &m)
{
    py::class_< UWillowAnimNode_AddCameraBone,  UAnimNodeBlend   >(m, "UWillowAnimNode_AddCameraBone")
        .def_readwrite("BoneName", &UWillowAnimNode_AddCameraBone::BoneName)
        .def_readwrite("BlendWeight", &UWillowAnimNode_AddCameraBone::BlendWeight)
        .def_readwrite("LocalToCompReqBones", &UWillowAnimNode_AddCameraBone::LocalToCompReqBones)
        .def_readwrite("CachedRefBoneCompSpaceTransform", &UWillowAnimNode_AddCameraBone::CachedRefBoneCompSpaceTransform)
        .def("SetBlendTarget", &UWillowAnimNode_AddCameraBone::SetBlendTarget)
          ;
}