#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineProfileSettings()
{
    class_< UOnlineProfileSettings, bases< UOnlinePlayerStorage >  , boost::noncopyable>("UOnlineProfileSettings", no_init)
        .def_readwrite("ProfileSettingIds", &UOnlineProfileSettings::ProfileSettingIds)
        .def_readwrite("DefaultSettings", &UOnlineProfileSettings::DefaultSettings)
        .def_readwrite("DefaultConsoleSettings", &UOnlineProfileSettings::DefaultConsoleSettings)
        .def_readwrite("OwnerMappings", &UOnlineProfileSettings::OwnerMappings)
        .def("StaticClass", &UOnlineProfileSettings::StaticClass, return_value_policy< reference_existing_object >())
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