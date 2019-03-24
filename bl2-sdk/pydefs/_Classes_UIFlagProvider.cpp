#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFlagProvider(py::module &m)
{
    py::class_< UIFlagProvider,  UInterface   >(m, "UIFlagProvider")
		.def_static("StaticClass", &UIFlagProvider::StaticClass, py::return_value_policy::reference)
          ;
}