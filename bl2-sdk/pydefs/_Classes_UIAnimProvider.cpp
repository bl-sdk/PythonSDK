#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAnimProvider()
{
    py::class_< UIAnimProvider,  UInterface   >("UIAnimProvider")
        .def("StaticClass", &UIAnimProvider::StaticClass, py::return_value_policy::reference)
        .def("GetAnims", &UIAnimProvider::GetAnims)
        .staticmethod("StaticClass")
  ;
}