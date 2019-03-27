#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShaderCache(py::module &m)
{
    py::class_< UShaderCache,  UObject   >(m, "UShaderCache")
		.def_static("StaticClass", &UShaderCache::StaticClass, py::return_value_policy::reference)
          ;
}