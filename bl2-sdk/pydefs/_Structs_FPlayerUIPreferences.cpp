#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerUIPreferences()
{
    py::class_< FPlayerUIPreferences >("FPlayerUIPreferences")
        .def_readwrite("CharacterName", &FPlayerUIPreferences::CharacterName)
        .def_readwrite("PrimaryColor", &FPlayerUIPreferences::PrimaryColor)
        .def_readwrite("SecondaryColor", &FPlayerUIPreferences::SecondaryColor)
        .def_readwrite("TertiaryColor", &FPlayerUIPreferences::TertiaryColor)
  ;
}