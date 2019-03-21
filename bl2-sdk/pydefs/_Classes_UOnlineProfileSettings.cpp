#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineProfileSettings()
{
    py::class_< UOnlineProfileSettings,  UOnlinePlayerStorage   >("UOnlineProfileSettings")
        .def_readwrite("ProfileSettingIds", &UOnlineProfileSettings::ProfileSettingIds)
        .def_readwrite("DefaultSettings", &UOnlineProfileSettings::DefaultSettings)
        .def_readwrite("DefaultConsoleSettings", &UOnlineProfileSettings::DefaultConsoleSettings)
        .def_readwrite("OwnerMappings", &UOnlineProfileSettings::OwnerMappings)
        .def("StaticClass", &UOnlineProfileSettings::StaticClass, py::return_value_policy::reference)
        .def("FindDefaultConsoleSettingIndex", &UOnlineProfileSettings::FindDefaultConsoleSettingIndex)
        .def("eventModifyAvailableProfileSettings", &UOnlineProfileSettings::eventModifyAvailableProfileSettings)
        .def("AppendVersionToReadIds", &UOnlineProfileSettings::AppendVersionToReadIds)
        .def("eventSetToDefaults", &UOnlineProfileSettings::eventSetToDefaults)
        .def("GetProfileSettingDefaultFloat", &UOnlineProfileSettings::GetProfileSettingDefaultFloat)
        .def("GetProfileSettingDefaultInt", &UOnlineProfileSettings::GetProfileSettingDefaultInt)
        .def("GetProfileSettingDefaultId", &UOnlineProfileSettings::GetProfileSettingDefaultId)
        .staticmethod("StaticClass")
  ;
}