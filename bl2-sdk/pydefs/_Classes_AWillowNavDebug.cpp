#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowNavDebug()
{
    py::class_< AWillowNavDebug,  AActor   >("AWillowNavDebug")
        .def("StaticClass", &AWillowNavDebug::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}