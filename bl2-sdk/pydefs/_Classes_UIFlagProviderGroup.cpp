#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFlagProviderGroup()
{
    py::class_< UIFlagProviderGroup,  UInterface   >("UIFlagProviderGroup")
        .def("StaticClass", &UIFlagProviderGroup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}