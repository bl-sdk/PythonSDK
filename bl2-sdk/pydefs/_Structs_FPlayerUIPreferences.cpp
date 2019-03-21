#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerUIPreferences()
{
    class_< FPlayerUIPreferences >("FPlayerUIPreferences", no_init)
        .def_readwrite("CharacterName", &FPlayerUIPreferences::CharacterName)
        .def_readwrite("PrimaryColor", &FPlayerUIPreferences::PrimaryColor)
        .def_readwrite("SecondaryColor", &FPlayerUIPreferences::SecondaryColor)
        .def_readwrite("TertiaryColor", &FPlayerUIPreferences::TertiaryColor)
  ;
}