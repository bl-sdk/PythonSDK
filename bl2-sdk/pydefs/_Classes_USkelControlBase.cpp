#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlBase(py::module &m)
{
    py::class_< USkelControlBase,  UAnimObject   >(m, "USkelControlBase")
		.def_static("StaticClass", &USkelControlBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ControlName", &USkelControlBase::ControlName)
        .def_readwrite("ControlStrength", &USkelControlBase::ControlStrength)
        .def_readwrite("BlendInTime", &USkelControlBase::BlendInTime)
        .def_readwrite("BlendOutTime", &USkelControlBase::BlendOutTime)
        .def_readwrite("BlendType", &USkelControlBase::BlendType)
        .def_readwrite("StrengthTarget", &USkelControlBase::StrengthTarget)
        .def_readwrite("BlendTimeToGo", &USkelControlBase::BlendTimeToGo)
        .def_readwrite("StrengthAnimNodeNameList", &USkelControlBase::StrengthAnimNodeNameList)
        .def_readwrite("CachedNodeList", &USkelControlBase::CachedNodeList)
        .def_readwrite("AnimMetadataWeight", &USkelControlBase::AnimMetadataWeight)
        .def_readwrite("AnimMetaDataUpdateTag", &USkelControlBase::AnimMetaDataUpdateTag)
        .def_readwrite("BoneScale", &USkelControlBase::BoneScale)
        .def_readwrite("ControlTickTag", &USkelControlBase::ControlTickTag)
        .def_readwrite("IgnoreAtOrAboveLOD", &USkelControlBase::IgnoreAtOrAboveLOD)
        .def_readwrite("NextControl", &USkelControlBase::NextControl)
        .def_readwrite("ControlPosX", &USkelControlBase::ControlPosX)
        .def_readwrite("ControlPosY", &USkelControlBase::ControlPosY)
        .def("GetControlMetadataWeight", &USkelControlBase::GetControlMetadataWeight)
        .def("eventTickSkelControl", &USkelControlBase::eventTickSkelControl)
        .def("SetSkelControlStrength", &USkelControlBase::SetSkelControlStrength)
        .def("SetSkelControlActive", &USkelControlBase::SetSkelControlActive)
          ;
}