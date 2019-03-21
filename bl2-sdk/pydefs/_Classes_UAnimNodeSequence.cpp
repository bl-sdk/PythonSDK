#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSequence(py::object m)
{
    py::class_< UAnimNodeSequence,  UAnimNode   >(m, "UAnimNodeSequence")
        .def_readwrite("AnimSeqName", &UAnimNodeSequence::AnimSeqName)
        .def_readwrite("Rate", &UAnimNodeSequence::Rate)
        .def_readwrite("CurrentTime", &UAnimNodeSequence::CurrentTime)
        .def_readwrite("PreviousTime", &UAnimNodeSequence::PreviousTime)
        .def_readwrite("EndTime", &UAnimNodeSequence::EndTime)
        .def_readwrite("AnimSeq", &UAnimNodeSequence::AnimSeq)
        .def_readwrite("AnimLinkupIndex", &UAnimNodeSequence::AnimLinkupIndex)
        .def_readwrite("NotifyWeightThreshold", &UAnimNodeSequence::NotifyWeightThreshold)
        .def_readwrite("SynchGroupName", &UAnimNodeSequence::SynchGroupName)
        .def_readwrite("SynchPosOffset", &UAnimNodeSequence::SynchPosOffset)
        .def_readwrite("CameraAnim", &UAnimNodeSequence::CameraAnim)
        .def_readwrite("ActiveCameraAnimInstance", &UAnimNodeSequence::ActiveCameraAnimInstance)
        .def_readwrite("CameraAnimScale", &UAnimNodeSequence::CameraAnimScale)
        .def_readwrite("CameraAnimPlayRate", &UAnimNodeSequence::CameraAnimPlayRate)
        .def_readwrite("CameraAnimBlendInTime", &UAnimNodeSequence::CameraAnimBlendInTime)
        .def_readwrite("CameraAnimBlendOutTime", &UAnimNodeSequence::CameraAnimBlendOutTime)
        .def_readwrite("MetaDataSkelControlList", &UAnimNodeSequence::MetaDataSkelControlList)
        .def("StaticClass", &UAnimNodeSequence::StaticClass, py::return_value_policy::reference)
        .def("SetRootBoneRotationOption", &UAnimNodeSequence::SetRootBoneRotationOption)
        .def("SetRootBoneAxisOption", &UAnimNodeSequence::SetRootBoneAxisOption)
        .def("GetTimeLeft", &UAnimNodeSequence::GetTimeLeft)
        .def("GetAnimPlaybackLength", &UAnimNodeSequence::GetAnimPlaybackLength)
        .def("GetGlobalPlayRate", &UAnimNodeSequence::GetGlobalPlayRate)
        .def("GetGroupRelativePosition", &UAnimNodeSequence::GetGroupRelativePosition)
        .def("FindGroupPosition", &UAnimNodeSequence::FindGroupPosition)
        .def("FindGroupRelativePosition", &UAnimNodeSequence::FindGroupRelativePosition)
        .def("GetNormalizedPosition", &UAnimNodeSequence::GetNormalizedPosition)
        .def("SetPosition", &UAnimNodeSequence::SetPosition)
        .def("ReplayAnim", &UAnimNodeSequence::ReplayAnim)
        .def("StopAnim", &UAnimNodeSequence::StopAnim)
        .def("PlayAnim", &UAnimNodeSequence::PlayAnim)
        .def("SetAnim", &UAnimNodeSequence::SetAnim)
          ;
}