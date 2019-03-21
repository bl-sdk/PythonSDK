#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMantleReachSpec()
{
    py::class_< UMantleReachSpec,  UForcedReachSpec   >("UMantleReachSpec")
        .def("StaticClass", &UMantleReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}