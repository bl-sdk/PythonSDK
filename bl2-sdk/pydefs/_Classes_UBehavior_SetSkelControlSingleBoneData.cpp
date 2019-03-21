#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlSingleBoneData()
{
    class_< UBehavior_SetSkelControlSingleBoneData, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetSkelControlSingleBoneData", no_init)
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlSingleBoneData::SkelControlName)
        .def_readwrite("BoneTranslation", &UBehavior_SetSkelControlSingleBoneData::BoneTranslation)
        .def_readwrite("BoneRotation", &UBehavior_SetSkelControlSingleBoneData::BoneRotation)
        .def("StaticClass", &UBehavior_SetSkelControlSingleBoneData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlSingleBoneData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}