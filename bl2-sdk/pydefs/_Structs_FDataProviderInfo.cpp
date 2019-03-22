#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDataProviderInfo(py::module &m)
{
    py::class_< FDataProviderInfo >(m, "FDataProviderInfo")
        .def_readwrite("DataProvider", &FDataProviderInfo::DataProvider)
        .def_readwrite("SelectedIndex", &FDataProviderInfo::SelectedIndex)
  ;
}