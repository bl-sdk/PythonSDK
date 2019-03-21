#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBodyInfoProvider()
{
    py::class_< UIBodyInfoProvider,  UInterface   >("UIBodyInfoProvider")
        .def("StaticClass", &UIBodyInfoProvider::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}