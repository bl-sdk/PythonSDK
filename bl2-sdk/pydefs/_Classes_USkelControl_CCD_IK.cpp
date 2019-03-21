#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControl_CCD_IK()
{
    class_< USkelControl_CCD_IK, bases< USkelControlBase >  , boost::noncopyable>("USkelControl_CCD_IK", no_init)
        .def_readwrite("EffectorLocation", &USkelControl_CCD_IK::EffectorLocation)
        .def_readwrite("EffectorLocationSpace", &USkelControl_CCD_IK::EffectorLocationSpace)
        .def_readwrite("EffectorSpaceBoneName", &USkelControl_CCD_IK::EffectorSpaceBoneName)
        .def_readwrite("EffectorTranslationFromBone", &USkelControl_CCD_IK::EffectorTranslationFromBone)
        .def_readwrite("NumBones", &USkelControl_CCD_IK::NumBones)
        .def_readwrite("MaxPerBoneIterations", &USkelControl_CCD_IK::MaxPerBoneIterations)
        .def_readwrite("IterationsCount", &USkelControl_CCD_IK::IterationsCount)
        .def_readwrite("Precision", &USkelControl_CCD_IK::Precision)
        .def_readwrite("AngleConstraint", &USkelControl_CCD_IK::AngleConstraint)
        .def_readwrite("MaxAngleSteps", &USkelControl_CCD_IK::MaxAngleSteps)
        .def("StaticClass", &USkelControl_CCD_IK::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}