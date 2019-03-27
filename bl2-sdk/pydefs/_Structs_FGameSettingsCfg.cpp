#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameSettingsCfg(py::module &m)
{
    py::class_< FGameSettingsCfg >(m, "FGameSettingsCfg")
        .def_readwrite("GameSettingsClass", &FGameSettingsCfg::GameSettingsClass)
        .def_readwrite("Provider", &FGameSettingsCfg::Provider)
        .def_readwrite("GameSettings", &FGameSettingsCfg::GameSettings)
        .def_readwrite("SettingsName", &FGameSettingsCfg::SettingsName)
  ;
}