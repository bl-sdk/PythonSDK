#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectFunctionAttributeValueResolver()
{
    py::class_< UObjectFunctionAttributeValueResolver,  UAttributeValueResolver   >("UObjectFunctionAttributeValueResolver")
        .def_readwrite("FunctionCall", &UObjectFunctionAttributeValueResolver::FunctionCall)
        .def("StaticClass", &UObjectFunctionAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}