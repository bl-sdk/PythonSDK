#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_AddCameraBone()
{
    class_< UWillowAnimNode_AddCameraBone, bases< UAnimNodeBlend >  , boost::noncopyable>("UWillowAnimNode_AddCameraBone", no_init)
        .def_readwrite("BoneName", &UWillowAnimNode_AddCameraBone::BoneName)
        .def_readwrite("BlendWeight", &UWillowAnimNode_AddCameraBone::BlendWeight)
        .def_readwrite("LocalToCompReqBones", &UWillowAnimNode_AddCameraBone::LocalToCompReqBones)
        .def_readwrite("CachedRefBoneCompSpaceTransform", &UWillowAnimNode_AddCameraBone::CachedRefBoneCompSpaceTransform)
        .def("StaticClass", &UWillowAnimNode_AddCameraBone::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBlendTarget", &UWillowAnimNode_AddCameraBone::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}