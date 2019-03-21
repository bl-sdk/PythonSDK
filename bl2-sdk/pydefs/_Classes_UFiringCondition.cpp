#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringCondition(py::object m)
{
    py::class_< UFiringCondition,  UObject   >(m, "UFiringCondition")
        .def("StaticClass", &UFiringCondition::StaticClass, py::return_value_policy::reference)
          ;
}