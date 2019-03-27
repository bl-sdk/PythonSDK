#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIResourceAttributeValueResolver(py::module &m)
{
    py::class_< UAIResourceAttributeValueResolver,  UAttributeValueResolver   >(m, "UAIResourceAttributeValueResolver")
		.def_static("StaticClass", &UAIResourceAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Resource", &UAIResourceAttributeValueResolver::Resource)
          ;
}