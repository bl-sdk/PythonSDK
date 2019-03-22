#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlineGameSettings(py::module &m)
{
    py::class_< UUIDataStore_OnlineGameSettings,  UUIDataStore   >(m, "UUIDataStore_OnlineGameSettings")
        .def_readwrite("GameSettingsCfgList", &UUIDataStore_OnlineGameSettings::GameSettingsCfgList)
        .def_readwrite("SettingsProviderClass", &UUIDataStore_OnlineGameSettings::SettingsProviderClass)
        .def_readwrite("SelectedIndex", &UUIDataStore_OnlineGameSettings::SelectedIndex)
        .def("eventUnregistered", &UUIDataStore_OnlineGameSettings::eventUnregistered)
        .def("eventRegistered", &UUIDataStore_OnlineGameSettings::eventRegistered)
        .def("eventMoveToPrevious", &UUIDataStore_OnlineGameSettings::eventMoveToPrevious)
        .def("eventMoveToNext", &UUIDataStore_OnlineGameSettings::eventMoveToNext)
        .def("eventSetCurrentByName", &UUIDataStore_OnlineGameSettings::eventSetCurrentByName)
        .def("eventSetCurrentByIndex", &UUIDataStore_OnlineGameSettings::eventSetCurrentByIndex)
        .def("eventGetCurrentProvider", &UUIDataStore_OnlineGameSettings::eventGetCurrentProvider, py::return_value_policy::reference)
        .def("eventGetCurrentGameSettings", &UUIDataStore_OnlineGameSettings::eventGetCurrentGameSettings, py::return_value_policy::reference)
        .def("eventCreateGame", &UUIDataStore_OnlineGameSettings::eventCreateGame)
        .def("OnSettingProviderChanged", &UUIDataStore_OnlineGameSettings::OnSettingProviderChanged)
          ;
}