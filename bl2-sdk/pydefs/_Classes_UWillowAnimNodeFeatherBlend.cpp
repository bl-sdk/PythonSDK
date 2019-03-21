#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeFeatherBlend()
{
    class_< UWillowAnimNodeFeatherBlend, bases< UAnimNodeBlend >  , boost::noncopyable>("UWillowAnimNodeFeatherBlend", no_init)
        .def_readwrite("BoneBlendTargets", &UWillowAnimNodeFeatherBlend::BoneBlendTargets)
        .def_readwrite("Child2PerBoneWeight", &UWillowAnimNodeFeatherBlend::Child2PerBoneWeight)
        .def_readwrite("LocalToCompReqBones", &UWillowAnimNodeFeatherBlend::LocalToCompReqBones)
        .def("StaticClass", &UWillowAnimNodeFeatherBlend::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBlendTarget", &UWillowAnimNodeFeatherBlend::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}