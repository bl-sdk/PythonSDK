#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendPerBone()
{
    class_< UAnimNodeBlendPerBone, bases< UAnimNodeBlend >  , boost::noncopyable>("UAnimNodeBlendPerBone", no_init)
        .def_readwrite("BranchStartBoneName", &UAnimNodeBlendPerBone::BranchStartBoneName)
        .def_readwrite("Child2PerBoneWeight", &UAnimNodeBlendPerBone::Child2PerBoneWeight)
        .def_readwrite("LocalToCompReqBones", &UAnimNodeBlendPerBone::LocalToCompReqBones)
        .def("StaticClass", &UAnimNodeBlendPerBone::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBlendTarget", &UAnimNodeBlendPerBone::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}