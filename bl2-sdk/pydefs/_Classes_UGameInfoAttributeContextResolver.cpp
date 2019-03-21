#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameInfoAttributeContextResolver()
{
    py::class_< UGameInfoAttributeContextResolver,  UAttributeContextResolver   >("UGameInfoAttributeContextResolver")
        .def("StaticClass", &UGameInfoAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}