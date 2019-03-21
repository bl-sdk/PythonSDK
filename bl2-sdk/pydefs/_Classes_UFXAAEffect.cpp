#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFXAAEffect()
{
    py::class_< UFXAAEffect,  UPostProcessEffect   >("UFXAAEffect")
        .def("StaticClass", &UFXAAEffect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}