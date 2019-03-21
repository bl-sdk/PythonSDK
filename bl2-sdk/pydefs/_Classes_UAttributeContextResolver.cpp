#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeContextResolver()
{
    py::class_< UAttributeContextResolver,  UObject   >("UAttributeContextResolver")
        .def("StaticClass", &UAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("eventGetAttributeContext", &UAttributeContextResolver::eventGetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}