#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCeilingReachSpec()
{
    py::class_< UCeilingReachSpec,  UReachSpec   >("UCeilingReachSpec")
        .def("StaticClass", &UCeilingReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}