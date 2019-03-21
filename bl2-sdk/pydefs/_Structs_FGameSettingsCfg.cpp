#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameSettingsCfg()
{
    class_< FGameSettingsCfg >("FGameSettingsCfg", no_init)
        .def_readwrite("GameSettingsClass", &FGameSettingsCfg::GameSettingsClass)
        .def_readwrite("Provider", &FGameSettingsCfg::Provider)
        .def_readwrite("GameSettings", &FGameSettingsCfg::GameSettings)
        .def_readwrite("SettingsName", &FGameSettingsCfg::SettingsName)
  ;
}