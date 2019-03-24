#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UControllerAttributeContextResolver(py::module &m)
{
    py::class_< UControllerAttributeContextResolver,  UAttributeContextResolver   >(m, "UControllerAttributeContextResolver")
		.def_static("StaticClass", &UControllerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}