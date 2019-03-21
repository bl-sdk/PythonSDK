#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowCoopPlayerStart()
{
    py::class_< AWillowCoopPlayerStart,  APlayerStart   >("AWillowCoopPlayerStart")
        .def("StaticClass", &AWillowCoopPlayerStart::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}