#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIResourcePoolProvider(py::module &m)
{
    py::class_< UIResourcePoolProvider,  UInterface   >(m, "UIResourcePoolProvider")
        .def("GetResourcePoolForResourceDefinition", &UIResourcePoolProvider::GetResourcePoolForResourceDefinition)
          ;
}