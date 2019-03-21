#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_PlayerAchievements()
{
    class_< UUIDataProvider_PlayerAchievements, bases< UUIDataProvider_OnlinePlayerDataBase >  , boost::noncopyable>("UUIDataProvider_PlayerAchievements", no_init)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_PlayerAchievements::VfTable_IUIListElementCellProvider)
        .def_readwrite("Achievements", &UUIDataProvider_PlayerAchievements::Achievements)
        .def("StaticClass", &UUIDataProvider_PlayerAchievements::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateAchievements", &UUIDataProvider_PlayerAchievements::UpdateAchievements)
        .def("OnLoginChange", &UUIDataProvider_PlayerAchievements::OnLoginChange)
        .def("eventOnUnregister", &UUIDataProvider_PlayerAchievements::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_PlayerAchievements::eventOnRegister)
        .def("OnPlayerAchievementUnlocked", &UUIDataProvider_PlayerAchievements::OnPlayerAchievementUnlocked)
        .def("OnPlayerAchievementsChanged", &UUIDataProvider_PlayerAchievements::OnPlayerAchievementsChanged)
        .def("GetAchievementDetails", &UUIDataProvider_PlayerAchievements::GetAchievementDetails)
        .def("GetAchievementIconPathName", &UUIDataProvider_PlayerAchievements::GetAchievementIconPathName)
        .def("PopulateAchievementIcons", &UUIDataProvider_PlayerAchievements::PopulateAchievementIcons)
        .def("GetMaxTotalGamerScore", &UUIDataProvider_PlayerAchievements::GetMaxTotalGamerScore)
        .def("GetTotalGamerScore", &UUIDataProvider_PlayerAchievements::GetTotalGamerScore)
        .staticmethod("StaticClass")
  ;
}