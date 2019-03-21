#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSettingsArrayProvider(py::object m)
{
    py::class_< FSettingsArrayProvider >(m, "FSettingsArrayProvider")
        .def_readwrite("SettingsId", &FSettingsArrayProvider::SettingsId)
        .def_readwrite("SettingsName", &FSettingsArrayProvider::SettingsName)
        .def_readwrite("Provider", &FSettingsArrayProvider::Provider)
  ;
}