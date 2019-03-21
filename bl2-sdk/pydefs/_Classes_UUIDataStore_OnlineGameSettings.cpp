#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlineGameSettings()
{
    class_< UUIDataStore_OnlineGameSettings, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_OnlineGameSettings", no_init)
        .def_readwrite("GameSettingsCfgList", &UUIDataStore_OnlineGameSettings::GameSettingsCfgList)
        .def_readwrite("SettingsProviderClass", &UUIDataStore_OnlineGameSettings::SettingsProviderClass)
        .def_readwrite("SelectedIndex", &UUIDataStore_OnlineGameSettings::SelectedIndex)
        .def("StaticClass", &UUIDataStore_OnlineGameSettings::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventUnregistered", &UUIDataStore_OnlineGameSettings::eventUnregistered)
        .def("eventRegistered", &UUIDataStore_OnlineGameSettings::eventRegistered)
        .def("eventMoveToPrevious", &UUIDataStore_OnlineGameSettings::eventMoveToPrevious)
        .def("eventMoveToNext", &UUIDataStore_OnlineGameSettings::eventMoveToNext)
        .def("eventSetCurrentByName", &UUIDataStore_OnlineGameSettings::eventSetCurrentByName)
        .def("eventSetCurrentByIndex", &UUIDataStore_OnlineGameSettings::eventSetCurrentByIndex)
        .def("eventGetCurrentProvider", &UUIDataStore_OnlineGameSettings::eventGetCurrentProvider, return_value_policy< reference_existing_object >())
        .def("eventGetCurrentGameSettings", &UUIDataStore_OnlineGameSettings::eventGetCurrentGameSettings, return_value_policy< reference_existing_object >())
        .def("eventCreateGame", &UUIDataStore_OnlineGameSettings::eventCreateGame)
        .def("OnSettingProviderChanged", &UUIDataStore_OnlineGameSettings::OnSettingProviderChanged)
        .staticmethod("StaticClass")
  ;
}