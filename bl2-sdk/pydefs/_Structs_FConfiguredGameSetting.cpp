#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConfiguredGameSetting()
{
    class_< FConfiguredGameSetting >("FConfiguredGameSetting", no_init)
        .def_readwrite("GameSettingId", &FConfiguredGameSetting::GameSettingId)
        .def_readwrite("GameSettingsClassName", &FConfiguredGameSetting::GameSettingsClassName)
        .def_readwrite("URL", &FConfiguredGameSetting::URL)
        .def_readwrite("GameSettings", &FConfiguredGameSetting::GameSettings)
  ;
}