#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectRedirector(py::module &m)
{
    py::class_< UObjectRedirector,  UObject   >(m, "UObjectRedirector")
		.def_static("StaticClass", &UObjectRedirector::StaticClass, py::return_value_policy::reference)
          ;
}