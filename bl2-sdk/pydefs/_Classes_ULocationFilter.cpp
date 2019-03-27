#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocationFilter(py::module &m)
{
    py::class_< ULocationFilter,  UObject   >(m, "ULocationFilter")
		.def_static("StaticClass", &ULocationFilter::StaticClass, py::return_value_policy::reference)
          ;
}