#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDataProviderInfo()
{
    py::class_< FDataProviderInfo >("FDataProviderInfo")
        .def_readwrite("DataProvider", &FDataProviderInfo::DataProvider)
        .def_readonly("UnknownData00", &FDataProviderInfo::UnknownData00)
        .def_readwrite("SelectedIndex", &FDataProviderInfo::SelectedIndex)
  ;
}