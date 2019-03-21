#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryManagerAttributeContextResolver(py::object m)
{
    py::class_< UWillowInventoryManagerAttributeContextResolver,  UAttributeContextResolver   >(m, "UWillowInventoryManagerAttributeContextResolver")
        .def("StaticClass", &UWillowInventoryManagerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UWillowInventoryManagerAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}