#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlBase()
{
    class_< USkelControlBase, bases< UAnimObject >  , boost::noncopyable>("USkelControlBase", no_init)
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
        .def("StaticClass", &USkelControlBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetControlMetadataWeight", &USkelControlBase::GetControlMetadataWeight)
        .def("eventTickSkelControl", &USkelControlBase::eventTickSkelControl)
        .def("SetSkelControlStrength", &USkelControlBase::SetSkelControlStrength)
        .def("SetSkelControlActive", &USkelControlBase::SetSkelControlActive)
        .staticmethod("StaticClass")
  ;
}