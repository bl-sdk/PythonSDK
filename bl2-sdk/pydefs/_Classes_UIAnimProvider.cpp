#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAnimProvider(py::module &m)
{
    py::class_< UIAnimProvider,  UInterface   >(m, "UIAnimProvider")
		.def_static("StaticClass", &UIAnimProvider::StaticClass, py::return_value_policy::reference)
        .def("GetAnims", &UIAnimProvider::GetAnims)
          ;
}