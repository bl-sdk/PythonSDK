#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFXAAEffect(py::object m)
{
    py::class_< UFXAAEffect,  UPostProcessEffect   >(m, "UFXAAEffect")
        .def("StaticClass", &UFXAAEffect::StaticClass, py::return_value_policy::reference)
          ;
}