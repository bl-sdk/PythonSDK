#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin(py::module &m)
{
    py::class_< USearchOrigin,  UObject   >(m, "USearchOrigin")
		.def_static("StaticClass", &USearchOrigin::StaticClass, py::return_value_policy::reference)
          ;
}