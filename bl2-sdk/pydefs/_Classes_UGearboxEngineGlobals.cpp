#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxEngineGlobals()
{
    class_< UGearboxEngineGlobals, bases< UObject >  , boost::noncopyable>("UGearboxEngineGlobals", no_init)
        .def_readwrite("TheTargetableList", &UGearboxEngineGlobals::TheTargetableList)
        .def_readwrite("AnimDebugTrack", &UGearboxEngineGlobals::AnimDebugTrack)
        .def_readwrite("AnimDebugCarat", &UGearboxEngineGlobals::AnimDebugCarat)
        .def_readwrite("SingletonInstance", &UGearboxEngineGlobals::SingletonInstance)
        .def_readwrite("ThePersistentDataManager", &UGearboxEngineGlobals::ThePersistentDataManager)
        .def_readwrite("PlayerOwnedComponents", &UGearboxEngineGlobals::PlayerOwnedComponents)
        .def_readwrite("DynamicShadowDirection", &UGearboxEngineGlobals::DynamicShadowDirection)
        .def_readwrite("WholeSceneDynamicShadowRadius", &UGearboxEngineGlobals::WholeSceneDynamicShadowRadius)
        .def_readwrite("AkCallBackGetRTPCs", &UGearboxEngineGlobals::AkCallBackGetRTPCs)
        .def("StaticClass", &UGearboxEngineGlobals::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetRTPCCallBackValue", &UGearboxEngineGlobals::GetRTPCCallBackValue)
        .def("RemoveRTPCCallback", &UGearboxEngineGlobals::RemoveRTPCCallback)
        .def("AddRTPCCallBack", &UGearboxEngineGlobals::AddRTPCCallBack)
        .def("GetTimeOfDayDominantDirectionalLightComponent", &UGearboxEngineGlobals::GetTimeOfDayDominantDirectionalLightComponent, return_value_policy< reference_existing_object >())
        .def("ResolveCustomMarkupString", &UGearboxEngineGlobals::ResolveCustomMarkupString)
        .def("ReleaseDamagePipelineObject", &UGearboxEngineGlobals::ReleaseDamagePipelineObject)
        .def("GetDamagePipelineObject", &UGearboxEngineGlobals::GetDamagePipelineObject, return_value_policy< reference_existing_object >())
        .def("IsPlayerOwnedComponentOwnedBy", &UGearboxEngineGlobals::IsPlayerOwnedComponentOwnedBy)
        .def("GetComponentPlayerOwner", &UGearboxEngineGlobals::GetComponentPlayerOwner, return_value_policy< reference_existing_object >())
        .def("RemovePlayerOwnedComponentsByOwner", &UGearboxEngineGlobals::RemovePlayerOwnedComponentsByOwner)
        .def("RemovePlayerOwnedComponentsByComponent", &UGearboxEngineGlobals::RemovePlayerOwnedComponentsByComponent)
        .def("RemovePlayerOwnedComponent", &UGearboxEngineGlobals::RemovePlayerOwnedComponent)
        .def("AddPlayerOwnedComponent", &UGearboxEngineGlobals::AddPlayerOwnedComponent)
        .def("SetLoadingMovieMustPlayToEnd", &UGearboxEngineGlobals::SetLoadingMovieMustPlayToEnd)
        .def("ShouldPlayLoadingMovieToEnd", &UGearboxEngineGlobals::ShouldPlayLoadingMovieToEnd)
        .def("FreeTexture2D", &UGearboxEngineGlobals::FreeTexture2D)
        .def("GetTexture2D", &UGearboxEngineGlobals::GetTexture2D, return_value_policy< reference_existing_object >())
        .def("OnDlgFinished", &UGearboxEngineGlobals::OnDlgFinished)
        .def("eventShowDialog", &UGearboxEngineGlobals::eventShowDialog, return_value_policy< reference_existing_object >())
        .def("RegDynamicTextureStreaming", &UGearboxEngineGlobals::RegDynamicTextureStreaming)
        .def("GetTargetableList", &UGearboxEngineGlobals::GetTargetableList, return_value_policy< reference_existing_object >())
        .def("GetGearboxEngineGlobals", &UGearboxEngineGlobals::GetGearboxEngineGlobals, return_value_policy< reference_existing_object >())
        .def("NotifyActorDied", &UGearboxEngineGlobals::NotifyActorDied)
        .staticmethod("StaticClass")
  ;
}