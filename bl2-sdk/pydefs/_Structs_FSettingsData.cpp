#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSettingsData()
{
    class_< FSettingsData >("FSettingsData", no_init)
        .def_readwrite("Type", &FSettingsData::Type)
        .def_readwrite("Value1", &FSettingsData::Value1)
        .def_readwrite("Value2", &FSettingsData::Value2)
  ;
}