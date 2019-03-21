#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowMindAttributeContextResolver()
{
    py::class_< UWillowMindAttributeContextResolver,  UAttributeContextResolver   >("UWillowMindAttributeContextResolver")
        .def("StaticClass", &UWillowMindAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}