#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedNetDriver()
{
    py::class_< FNamedNetDriver >("FNamedNetDriver")
        .def_readwrite("NetDriverName", &FNamedNetDriver::NetDriverName)
        .def_readwrite("NetDriver", &FNamedNetDriver::NetDriver)
  ;
}