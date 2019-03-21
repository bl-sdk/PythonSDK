#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShaderCache()
{
    py::class_< UShaderCache,  UObject   >("UShaderCache")
        .def_readonly("UnknownData00", &UShaderCache::UnknownData00)
        .def("StaticClass", &UShaderCache::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}