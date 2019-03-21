#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSettingsArrayProvider()
{
    class_< FSettingsArrayProvider >("FSettingsArrayProvider", no_init)
        .def_readwrite("SettingsId", &FSettingsArrayProvider::SettingsId)
        .def_readwrite("SettingsName", &FSettingsArrayProvider::SettingsName)
        .def_readwrite("Provider", &FSettingsArrayProvider::Provider)
  ;
}