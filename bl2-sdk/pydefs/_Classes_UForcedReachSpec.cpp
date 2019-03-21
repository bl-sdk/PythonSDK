#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForcedReachSpec(py::object m)
{
    py::class_< UForcedReachSpec,  UReachSpec   >(m, "UForcedReachSpec")
        .def("StaticClass", &UForcedReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}