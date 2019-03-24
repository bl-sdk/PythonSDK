#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPolys(py::module &m)
{
    py::class_< UPolys,  UObject   >(m, "UPolys")
		.def_static("StaticClass", &UPolys::StaticClass, py::return_value_policy::reference)
          ;
}