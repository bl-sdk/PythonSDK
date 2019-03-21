#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectFunctionAttributeValueResolver(py::object m)
{
    py::class_< UObjectFunctionAttributeValueResolver,  UAttributeValueResolver   >(m, "UObjectFunctionAttributeValueResolver")
        .def_readwrite("FunctionCall", &UObjectFunctionAttributeValueResolver::FunctionCall)
        .def("StaticClass", &UObjectFunctionAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}