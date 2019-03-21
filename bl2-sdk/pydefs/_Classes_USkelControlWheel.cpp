#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlWheel(py::object m)
{
    py::class_< USkelControlWheel,  USkelControlBase   >(m, "USkelControlWheel")
        .def_readwrite("WheelDisplacement", &USkelControlWheel::WheelDisplacement)
        .def_readwrite("WheelMaxRenderDisplacement", &USkelControlWheel::WheelMaxRenderDisplacement)
        .def_readwrite("WheelRoll", &USkelControlWheel::WheelRoll)
        .def_readwrite("WheelRollAxis", &USkelControlWheel::WheelRollAxis)
        .def_readwrite("WheelSteeringAxis", &USkelControlWheel::WheelSteeringAxis)
        .def_readwrite("WheelSteering", &USkelControlWheel::WheelSteering)
        .def_readwrite("BoneTranslation", &USkelControlSingleBone::BoneTranslation)
        .def_readwrite("BoneTranslationSpace", &USkelControlSingleBone::BoneTranslationSpace)
        .def_readwrite("BoneRotationSpace", &USkelControlSingleBone::BoneRotationSpace)
        .def_readwrite("TranslationSpaceBoneName", &USkelControlSingleBone::TranslationSpaceBoneName)
        .def_readwrite("BoneRotation", &USkelControlSingleBone::BoneRotation)
        .def_readwrite("RotationSpaceBoneName", &USkelControlSingleBone::RotationSpaceBoneName)
        .def("StaticClass", &USkelControlWheel::StaticClass, py::return_value_policy::reference)
          ;
}