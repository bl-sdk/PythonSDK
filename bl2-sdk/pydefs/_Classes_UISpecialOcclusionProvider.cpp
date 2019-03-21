#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISpecialOcclusionProvider()
{
    py::class_< UISpecialOcclusionProvider,  UInterface   >("UISpecialOcclusionProvider")
        .def("StaticClass", &UISpecialOcclusionProvider::StaticClass, py::return_value_policy::reference)
        .def("GetOcclusionAmount", &UISpecialOcclusionProvider::GetOcclusionAmount)
        .staticmethod("StaticClass")
  ;
}