#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_PlayerAchievements(py::object m)
{
    py::class_< UUIDataProvider_PlayerAchievements,  UUIDataProvider_OnlinePlayerDataBase   >(m, "UUIDataProvider_PlayerAchievements")
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_PlayerAchievements::VfTable_IUIListElementCellProvider)
        .def_readwrite("Achievements", &UUIDataProvider_PlayerAchievements::Achievements)
        .def("StaticClass", &UUIDataProvider_PlayerAchievements::StaticClass, py::return_value_policy::reference)
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
          ;
}