#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAdvancedReachSpec(py::module &m)
{
    py::class_< UAdvancedReachSpec,  UReachSpec   >(m, "UAdvancedReachSpec")
		.def_static("StaticClass", &UAdvancedReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}