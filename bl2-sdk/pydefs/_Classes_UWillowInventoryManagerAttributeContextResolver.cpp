#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryManagerAttributeContextResolver()
{
    py::class_< UWillowInventoryManagerAttributeContextResolver,  UAttributeContextResolver   >("UWillowInventoryManagerAttributeContextResolver")
        .def("StaticClass", &UWillowInventoryManagerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UWillowInventoryManagerAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}