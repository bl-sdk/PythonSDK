#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlSingleBone()
{
    class_< USkelControlSingleBone, bases< USkelControlBase >  , boost::noncopyable>("USkelControlSingleBone", no_init)
        .def_readwrite("BoneTranslation", &USkelControlSingleBone::BoneTranslation)
        .def_readwrite("BoneTranslationSpace", &USkelControlSingleBone::BoneTranslationSpace)
        .def_readwrite("BoneRotationSpace", &USkelControlSingleBone::BoneRotationSpace)
        .def_readwrite("TranslationSpaceBoneName", &USkelControlSingleBone::TranslationSpaceBoneName)
        .def_readwrite("BoneRotation", &USkelControlSingleBone::BoneRotation)
        .def_readwrite("RotationSpaceBoneName", &USkelControlSingleBone::RotationSpaceBoneName)
        .def("StaticClass", &USkelControlSingleBone::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}