#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDebugArrowComponent(py::module &m)
{
    py::class_< UDebugArrowComponent,  UArrowComponent   >(m, "UDebugArrowComponent")
		.def_static("StaticClass", &UDebugArrowComponent::StaticClass, py::return_value_policy::reference)
          ;
}