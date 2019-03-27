#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIResourcePoolProvider(py::module &m)
{
    py::class_< UIResourcePoolProvider,  UInterface   >(m, "UIResourcePoolProvider")
		.def_static("StaticClass", &UIResourcePoolProvider::StaticClass, py::return_value_policy::reference)
        .def("GetResourcePoolForResourceDefinition", &UIResourcePoolProvider::GetResourcePoolForResourceDefinition)
          ;
}