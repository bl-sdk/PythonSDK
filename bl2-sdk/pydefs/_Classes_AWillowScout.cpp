#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowScout()
{
    py::class_< AWillowScout,  AScout   >("AWillowScout")
        .def("StaticClass", &AWillowScout::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}