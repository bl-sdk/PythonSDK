#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFacebookWindows(py::module &m)
{
    py::class_< UFacebookWindows,  UFacebookIntegration   >(m, "UFacebookWindows")
        .def("StaticClass", &UFacebookWindows::StaticClass, py::return_value_policy::reference)
          ;
}