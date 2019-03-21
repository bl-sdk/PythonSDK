#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowNavDebug(py::object m)
{
    py::class_< AWillowNavDebug,  AActor   >(m, "AWillowNavDebug")
        .def("StaticClass", &AWillowNavDebug::StaticClass, py::return_value_policy::reference)
          ;
}