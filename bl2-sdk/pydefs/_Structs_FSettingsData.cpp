#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSettingsData()
{
    py::class_< FSettingsData >("FSettingsData")
        .def_readwrite("Type", &FSettingsData::Type)
        .def_readwrite("Value1", &FSettingsData::Value1)
        .def_readwrite("Value2", &FSettingsData::Value2)
  ;
}