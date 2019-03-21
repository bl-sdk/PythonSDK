#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProscribedReachSpec()
{
    py::class_< UProscribedReachSpec,  UReachSpec   >("UProscribedReachSpec")
        .def("StaticClass", &UProscribedReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}