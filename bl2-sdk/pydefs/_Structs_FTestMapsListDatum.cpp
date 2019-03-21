#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTestMapsListDatum()
{
    py::class_< FTestMapsListDatum >("FTestMapsListDatum")
        .def_readwrite("MapDisplayName", &FTestMapsListDatum::MapDisplayName)
        .def_readwrite("MapName", &FTestMapsListDatum::MapName)
  ;
}