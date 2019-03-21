#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShaderCache(py::object m)
{
    py::class_< UShaderCache,  UObject   >(m, "UShaderCache")
        .def("StaticClass", &UShaderCache::StaticClass, py::return_value_policy::reference)
          ;
}