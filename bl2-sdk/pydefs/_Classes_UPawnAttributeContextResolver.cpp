#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnAttributeContextResolver()
{
    py::class_< UPawnAttributeContextResolver,  UAttributeContextResolver   >("UPawnAttributeContextResolver")
        .def("StaticClass", &UPawnAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}