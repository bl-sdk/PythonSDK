#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShowDebugHelpers(py::module &m)
{
    py::class_< UShowDebugHelpers,  UObject   >(m, "UShowDebugHelpers")
		.def_static("StaticClass", &UShowDebugHelpers::StaticClass, py::return_value_policy::reference)
          ;
}