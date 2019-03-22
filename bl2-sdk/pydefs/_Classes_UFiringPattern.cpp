#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringPattern(py::module &m)
{
    py::class_< UFiringPattern,  UObject   >(m, "UFiringPattern")
        .def("StaticClass", &UFiringPattern::StaticClass, py::return_value_policy::reference)
          ;
}