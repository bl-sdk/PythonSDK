#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UControllerAttributeContextResolver()
{
    py::class_< UControllerAttributeContextResolver,  UAttributeContextResolver   >("UControllerAttributeContextResolver")
        .def("StaticClass", &UControllerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}