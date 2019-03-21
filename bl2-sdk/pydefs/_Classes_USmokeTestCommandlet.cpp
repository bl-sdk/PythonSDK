#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USmokeTestCommandlet()
{
    py::class_< USmokeTestCommandlet,  UCommandlet   >("USmokeTestCommandlet")
        .def("StaticClass", &USmokeTestCommandlet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}