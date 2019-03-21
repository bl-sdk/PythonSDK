#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectFunctionFlagValueResolver(py::object m)
{
    py::class_< UObjectFunctionFlagValueResolver,  UFlagValueResolver   >(m, "UObjectFunctionFlagValueResolver")
        .def_readwrite("CheckRate", &UObjectFunctionFlagValueResolver::CheckRate)
        .def_readwrite("FunctionCall", &UObjectFunctionFlagValueResolver::FunctionCall)
        .def("StaticClass", &UObjectFunctionFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}