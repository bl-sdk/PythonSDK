#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHUDWidget_WorldSpace()
{
    class_< UHUDWidget_WorldSpace, bases< UHUDWidget_Base >  , boost::noncopyable>("UHUDWidget_WorldSpace", no_init)
        .def_readwrite("ObjectiveIcons", &UHUDWidget_WorldSpace::ObjectiveIcons)
        .def_readwrite("PlayerIcons", &UHUDWidget_WorldSpace::PlayerIcons)
        .def_readwrite("NPCAllyIcons", &UHUDWidget_WorldSpace::NPCAllyIcons)
        .def_readwrite("HUDDef", &UHUDWidget_WorldSpace::HUDDef)
        .def_readonly("RelevantPlayerPawns", &UHUDWidget_WorldSpace::RelevantPlayerPawns)
        .def_readwrite("NextRelevantPlayerPawnIndex", &UHUDWidget_WorldSpace::NextRelevantPlayerPawnIndex)
        .def_readonly("CachedPlayerName", &UHUDWidget_WorldSpace::CachedPlayerName)
        .def_readonly("bCachedPlayerState", &UHUDWidget_WorldSpace::bCachedPlayerState)
        .def_readonly("CachedNPCAllyName", &UHUDWidget_WorldSpace::CachedNPCAllyName)
        .def_readwrite("VVOrg", &UHUDWidget_WorldSpace::VVOrg)
        .def_readwrite("VVExt", &UHUDWidget_WorldSpace::VVExt)
        .def_readwrite("TopLevelClip", &UHUDWidget_WorldSpace::TopLevelClip)
        .def_readwrite("MinimapWrapperClip", &UHUDWidget_WorldSpace::MinimapWrapperClip)
        .def_readwrite("MinimapClip", &UHUDWidget_WorldSpace::MinimapClip)
        .def_readwrite("ParentClip", &UHUDWidget_WorldSpace::ParentClip)
        .def("StaticClass", &UHUDWidget_WorldSpace::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetPRIFor", &UHUDWidget_WorldSpace::GetPRIFor, return_value_policy< reference_existing_object >())
        .def("NotifyOfPawnRelevance", &UHUDWidget_WorldSpace::NotifyOfPawnRelevance)
        .def("UpdateNPCAllyIcons", &UHUDWidget_WorldSpace::UpdateNPCAllyIcons)
        .def("UpdatePlayerIcons", &UHUDWidget_WorldSpace::UpdatePlayerIcons)
        .def("UpdateObjectiveIcons", &UHUDWidget_WorldSpace::UpdateObjectiveIcons)
        .def("IsShowingObjective", &UHUDWidget_WorldSpace::IsShowingObjective)
        .def("SetVirtualViewport", &UHUDWidget_WorldSpace::SetVirtualViewport)
        .def("Update", &UHUDWidget_WorldSpace::Update)
        .def("Deinit", &UHUDWidget_WorldSpace::Deinit)
        .def("Init", &UHUDWidget_WorldSpace::Init)
        .staticmethod("StaticClass")
  ;
}