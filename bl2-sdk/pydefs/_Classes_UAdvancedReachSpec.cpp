#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAdvancedReachSpec()
{
    py::class_< UAdvancedReachSpec,  UReachSpec   >("UAdvancedReachSpec")
        .def("StaticClass", &UAdvancedReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}