#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlSingleBone(py::object m)
{
    py::class_< USkelControlSingleBone,  USkelControlBase   >(m, "USkelControlSingleBone")
        .def_readwrite("BoneTranslation", &USkelControlSingleBone::BoneTranslation)
        .def_readwrite("BoneTranslationSpace", &USkelControlSingleBone::BoneTranslationSpace)
        .def_readwrite("BoneRotationSpace", &USkelControlSingleBone::BoneRotationSpace)
        .def_readwrite("TranslationSpaceBoneName", &USkelControlSingleBone::TranslationSpaceBoneName)
        .def_readwrite("BoneRotation", &USkelControlSingleBone::BoneRotation)
        .def_readwrite("RotationSpaceBoneName", &USkelControlSingleBone::RotationSpaceBoneName)
        .def("StaticClass", &USkelControlSingleBone::StaticClass, py::return_value_policy::reference)
          ;
}