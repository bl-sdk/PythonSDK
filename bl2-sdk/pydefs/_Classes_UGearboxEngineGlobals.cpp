#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxEngineGlobals(py::object m)
{
    py::class_< UGearboxEngineGlobals,  UObject   >(m, "UGearboxEngineGlobals")
        .def_readwrite("TheTargetableList", &UGearboxEngineGlobals::TheTargetableList)
        .def_readwrite("AnimDebugTrack", &UGearboxEngineGlobals::AnimDebugTrack)
        .def_readwrite("AnimDebugCarat", &UGearboxEngineGlobals::AnimDebugCarat)
        .def_readwrite("SingletonInstance", &UGearboxEngineGlobals::SingletonInstance)
        .def_readwrite("ThePersistentDataManager", &UGearboxEngineGlobals::ThePersistentDataManager)
        .def_readwrite("PlayerOwnedComponents", &UGearboxEngineGlobals::PlayerOwnedComponents)
        .def_readwrite("DynamicShadowDirection", &UGearboxEngineGlobals::DynamicShadowDirection)
        .def_readwrite("WholeSceneDynamicShadowRadius", &UGearboxEngineGlobals::WholeSceneDynamicShadowRadius)
        .def_readwrite("AkCallBackGetRTPCs", &UGearboxEngineGlobals::AkCallBackGetRTPCs)
        .def("StaticClass", &UGearboxEngineGlobals::StaticClass, py::return_value_policy::reference)
        .def("GetRTPCCallBackValue", &UGearboxEngineGlobals::GetRTPCCallBackValue)
        .def("RemoveRTPCCallback", &UGearboxEngineGlobals::RemoveRTPCCallback)
        .def("AddRTPCCallBack", &UGearboxEngineGlobals::AddRTPCCallBack)
        .def("GetTimeOfDayDominantDirectionalLightComponent", &UGearboxEngineGlobals::GetTimeOfDayDominantDirectionalLightComponent, py::return_value_policy::reference)
        .def("ResolveCustomMarkupString", &UGearboxEngineGlobals::ResolveCustomMarkupString)
        .def("ReleaseDamagePipelineObject", &UGearboxEngineGlobals::ReleaseDamagePipelineObject)
        .def("GetDamagePipelineObject", &UGearboxEngineGlobals::GetDamagePipelineObject, py::return_value_policy::reference)
        .def("IsPlayerOwnedComponentOwnedBy", &UGearboxEngineGlobals::IsPlayerOwnedComponentOwnedBy)
        .def("GetComponentPlayerOwner", &UGearboxEngineGlobals::GetComponentPlayerOwner, py::return_value_policy::reference)
        .def("RemovePlayerOwnedComponentsByOwner", &UGearboxEngineGlobals::RemovePlayerOwnedComponentsByOwner)
        .def("RemovePlayerOwnedComponentsByComponent", &UGearboxEngineGlobals::RemovePlayerOwnedComponentsByComponent)
        .def("RemovePlayerOwnedComponent", &UGearboxEngineGlobals::RemovePlayerOwnedComponent)
        .def("AddPlayerOwnedComponent", &UGearboxEngineGlobals::AddPlayerOwnedComponent)
        .def("SetLoadingMovieMustPlayToEnd", &UGearboxEngineGlobals::SetLoadingMovieMustPlayToEnd)
        .def("ShouldPlayLoadingMovieToEnd", &UGearboxEngineGlobals::ShouldPlayLoadingMovieToEnd)
        .def("FreeTexture2D", &UGearboxEngineGlobals::FreeTexture2D)
        .def("GetTexture2D", &UGearboxEngineGlobals::GetTexture2D, py::return_value_policy::reference)
        .def("OnDlgFinished", &UGearboxEngineGlobals::OnDlgFinished)
        .def("eventShowDialog", &UGearboxEngineGlobals::eventShowDialog, py::return_value_policy::reference)
        .def("RegDynamicTextureStreaming", &UGearboxEngineGlobals::RegDynamicTextureStreaming)
        .def("GetTargetableList", &UGearboxEngineGlobals::GetTargetableList, py::return_value_policy::reference)
        .def("GetGearboxEngineGlobals", &UGearboxEngineGlobals::GetGearboxEngineGlobals, py::return_value_policy::reference)
        .def("NotifyActorDied", &UGearboxEngineGlobals::NotifyActorDied)
          ;
}