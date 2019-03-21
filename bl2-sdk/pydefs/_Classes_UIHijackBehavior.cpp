#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIHijackBehavior()
{
    py::class_< UIHijackBehavior,  UInterface   >("UIHijackBehavior")
        .def("StaticClass", &UIHijackBehavior::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}