#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConfiguredGameSetting(py::module &m)
{
    py::class_< FConfiguredGameSetting >(m, "FConfiguredGameSetting")
        .def_readwrite("GameSettingId", &FConfiguredGameSetting::GameSettingId)
        .def_readwrite("GameSettingsClassName", &FConfiguredGameSetting::GameSettingsClassName)
        .def_readwrite("URL", &FConfiguredGameSetting::URL)
        .def_readwrite("GameSettings", &FConfiguredGameSetting::GameSettings)
  ;
}