#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForcedReachSpec()
{
    py::class_< UForcedReachSpec,  UReachSpec   >("UForcedReachSpec")
        .def("StaticClass", &UForcedReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}