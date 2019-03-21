#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightShafts()
{
    py::class_< ALightShafts,  ALight   >("ALightShafts")
        .def("StaticClass", &ALightShafts::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}