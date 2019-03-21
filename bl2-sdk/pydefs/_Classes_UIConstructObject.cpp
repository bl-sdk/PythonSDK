#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIConstructObject()
{
    py::class_< UIConstructObject,  UInterface   >("UIConstructObject")
        .def("StaticClass", &UIConstructObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}