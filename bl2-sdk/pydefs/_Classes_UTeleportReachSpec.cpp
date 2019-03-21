#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTeleportReachSpec()
{
    py::class_< UTeleportReachSpec,  UReachSpec   >("UTeleportReachSpec")
        .def("StaticClass", &UTeleportReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}