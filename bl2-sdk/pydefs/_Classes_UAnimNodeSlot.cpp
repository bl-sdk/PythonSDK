#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeSlot()
{
    class_< UAnimNodeSlot, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeSlot", no_init)
        .def_readwrite("PendingBlendOutTime", &UAnimNodeSlot::PendingBlendOutTime)
        .def_readwrite("CustomChildIndex", &UAnimNodeSlot::CustomChildIndex)
        .def_readwrite("TargetChildIndex", &UAnimNodeSlot::TargetChildIndex)
        .def_readwrite("TargetWeight", &UAnimNodeSlot::TargetWeight)
        .def_readwrite("BlendTimeToGo", &UAnimNodeSlot::BlendTimeToGo)
        .def_readwrite("SynchNode", &UAnimNodeSlot::SynchNode)
        .def("StaticClass", &UAnimNodeSlot::StaticClass, return_value_policy< reference_existing_object >())
        .def("TickChildWeights", &UAnimNodeSlot::TickChildWeights)
        .def("AddToSynchGroup", &UAnimNodeSlot::AddToSynchGroup)
        .def("SetRootBoneRotationOption", &UAnimNodeSlot::SetRootBoneRotationOption)
        .def("SetRootBoneAxisOption", &UAnimNodeSlot::SetRootBoneAxisOption)
        .def("GetCustomAnimNodeSeq", &UAnimNodeSlot::GetCustomAnimNodeSeq, return_value_policy< reference_existing_object >())
        .def("SetActorAnimEndNotification", &UAnimNodeSlot::SetActorAnimEndNotification)
        .def("SetCustomAnim", &UAnimNodeSlot::SetCustomAnim)
        .def("StopCustomAnim", &UAnimNodeSlot::StopCustomAnim)
        .def("GetPlayedAnimation", &UAnimNodeSlot::GetPlayedAnimation)
        .def("PlayCustomAnimByDuration", &UAnimNodeSlot::PlayCustomAnimByDuration)
        .def("PlayCustomAnim", &UAnimNodeSlot::PlayCustomAnim)
        .staticmethod("StaticClass")
  ;
}