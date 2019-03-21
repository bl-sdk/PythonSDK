#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFacebookWindows(py::object m)
{
    py::class_< UFacebookWindows,  UFacebookIntegration   >(m, "UFacebookWindows")
        .def_readonly("UnknownData00", &UFacebookWindows::UnknownData00)
        .def("StaticClass", &UFacebookWindows::StaticClass, py::return_value_policy::reference)
          ;
}