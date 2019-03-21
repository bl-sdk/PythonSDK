#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIResourcePoolProvider()
{
    py::class_< UIResourcePoolProvider,  UInterface   >("UIResourcePoolProvider")
        .def("StaticClass", &UIResourcePoolProvider::StaticClass, py::return_value_policy::reference)
        .def("GetResourcePoolForResourceDefinition", &UIResourcePoolProvider::GetResourcePoolForResourceDefinition)
        .staticmethod("StaticClass")
  ;
}