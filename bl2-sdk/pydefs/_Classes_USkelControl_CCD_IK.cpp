#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControl_CCD_IK(py::module &m)
{
    py::class_< USkelControl_CCD_IK,  USkelControlBase   >(m, "USkelControl_CCD_IK")
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
        .def("StaticClass", &USkelControl_CCD_IK::StaticClass, py::return_value_policy::reference)
          ;
}