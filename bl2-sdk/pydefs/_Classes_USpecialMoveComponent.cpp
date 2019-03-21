#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMoveComponent()
{
    class_< USpecialMoveComponent, bases< UActorComponent >  , boost::noncopyable>("USpecialMoveComponent", no_init)
        .def_readwrite("StartTime", &USpecialMoveComponent::StartTime)
        .def_readwrite("SMI", &USpecialMoveComponent::SMI)
        .def_readonly("UnknownData00", &USpecialMoveComponent::UnknownData00)
        .def_readwrite("CurrentSMData", &USpecialMoveComponent::CurrentSMData)
        .def_readwrite("SMDQueue", &USpecialMoveComponent::SMDQueue)
        .def_readwrite("SMBlendNode", &USpecialMoveComponent::SMBlendNode)
        .def("StaticClass", &USpecialMoveComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsOwnerAlwaysNetRelevant", &USpecialMoveComponent::IsOwnerAlwaysNetRelevant)
        .def("CanPlayBehaviorData", &USpecialMoveComponent::CanPlayBehaviorData)
        .def("RunBehaviors", &USpecialMoveComponent::RunBehaviors)
        .def("GetCurrent", &USpecialMoveComponent::GetCurrent, return_value_policy< reference_existing_object >())
        .def("GetPlayRateScale", &USpecialMoveComponent::GetPlayRateScale)
        .def("GetDuration", &USpecialMoveComponent::GetDuration)
        .def("GetData", &USpecialMoveComponent::GetData, return_value_policy< reference_existing_object >())
        .def("LocalAnimFinished", &USpecialMoveComponent::LocalAnimFinished)
        .def("ClearQueue", &USpecialMoveComponent::ClearQueue)
        .def("StopAnyLocal", &USpecialMoveComponent::StopAnyLocal)
        .def("StopLocal", &USpecialMoveComponent::StopLocal)
        .def("StopAny", &USpecialMoveComponent::StopAny)
        .def("Stop", &USpecialMoveComponent::Stop)
        .def("PlayLocal", &USpecialMoveComponent::PlayLocal)
        .def("Queue", &USpecialMoveComponent::Queue)
        .def("Play", &USpecialMoveComponent::Play)
        .def("RemoveFromQueue", &USpecialMoveComponent::RemoveFromQueue)
        .def("IsQueued", &USpecialMoveComponent::IsQueued)
        .def("IsPlayingClass", &USpecialMoveComponent::IsPlayingClass)
        .def("IsPlayingAny", &USpecialMoveComponent::IsPlayingAny)
        .def("IsPlaying", &USpecialMoveComponent::IsPlaying)
        .def("GetAnimDelta", &USpecialMoveComponent::GetAnimDelta)
        .def("GetSMNode", &USpecialMoveComponent::GetSMNode, return_value_policy< reference_existing_object >())
        .def("PlayReplicated", &USpecialMoveComponent::PlayReplicated)
        .def("GetAnimLength", &USpecialMoveComponent::GetAnimLength)
        .staticmethod("StaticClass")
  ;
}