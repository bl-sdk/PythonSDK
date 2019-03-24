#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowCoopPlayerStart(py::module &m)
{
    py::class_< AWillowCoopPlayerStart,  APlayerStart   >(m, "AWillowCoopPlayerStart")
		.def_static("StaticClass", &AWillowCoopPlayerStart::StaticClass, py::return_value_policy::reference)
          ;
}