#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWallTransReachSpec()
{
    py::class_< UWallTransReachSpec,  UReachSpec   >("UWallTransReachSpec")
        .def("StaticClass", &UWallTransReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}