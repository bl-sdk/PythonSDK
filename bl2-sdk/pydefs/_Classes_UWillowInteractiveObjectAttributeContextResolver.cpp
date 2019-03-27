#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInteractiveObjectAttributeContextResolver(py::module &m)
{
    py::class_< UWillowInteractiveObjectAttributeContextResolver,  UAttributeContextResolver   >(m, "UWillowInteractiveObjectAttributeContextResolver")
		.def_static("StaticClass", &UWillowInteractiveObjectAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UWillowInteractiveObjectAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}