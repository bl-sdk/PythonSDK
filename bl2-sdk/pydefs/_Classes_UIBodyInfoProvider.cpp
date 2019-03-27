#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBodyInfoProvider(py::module &m)
{
    py::class_< UIBodyInfoProvider,  UInterface   >(m, "UIBodyInfoProvider")
		.def_static("StaticClass", &UIBodyInfoProvider::StaticClass, py::return_value_policy::reference)
          ;
}