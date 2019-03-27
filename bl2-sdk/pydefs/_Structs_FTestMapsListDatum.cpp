#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTestMapsListDatum(py::module &m)
{
    py::class_< FTestMapsListDatum >(m, "FTestMapsListDatum")
        .def_readwrite("MapDisplayName", &FTestMapsListDatum::MapDisplayName)
        .def_readwrite("MapName", &FTestMapsListDatum::MapName)
  ;
}