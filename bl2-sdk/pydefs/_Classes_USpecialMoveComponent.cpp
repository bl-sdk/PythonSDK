#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMoveComponent(py::module &m)
{
    py::class_< USpecialMoveComponent,  UActorComponent   >(m, "USpecialMoveComponent")
        .def_readwrite("StartTime", &USpecialMoveComponent::StartTime)
        .def_readwrite("SMI", &USpecialMoveComponent::SMI)
        .def_readwrite("CurrentSMData", &USpecialMoveComponent::CurrentSMData)
        .def_readwrite("SMDQueue", &USpecialMoveComponent::SMDQueue)
        .def_readwrite("SMBlendNode", &USpecialMoveComponent::SMBlendNode)
        .def("StaticClass", &USpecialMoveComponent::StaticClass, py::return_value_policy::reference)
        .def("IsOwnerAlwaysNetRelevant", &USpecialMoveComponent::IsOwnerAlwaysNetRelevant)
        .def("CanPlayBehaviorData", &USpecialMoveComponent::CanPlayBehaviorData)
        .def("RunBehaviors", &USpecialMoveComponent::RunBehaviors)
        .def("GetCurrent", &USpecialMoveComponent::GetCurrent, py::return_value_policy::reference)
        .def("GetPlayRateScale", &USpecialMoveComponent::GetPlayRateScale)
        .def("GetDuration", &USpecialMoveComponent::GetDuration)
        .def("GetData", &USpecialMoveComponent::GetData, py::return_value_policy::reference)
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
        .def("GetSMNode", &USpecialMoveComponent::GetSMNode, py::return_value_policy::reference)
        .def("PlayReplicated", &USpecialMoveComponent::PlayReplicated)
        .def("GetAnimLength", &USpecialMoveComponent::GetAnimLength)
          ;
}