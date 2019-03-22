#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectFunctionFlagValueResolver(py::module &m)
{
    py::class_< UObjectFunctionFlagValueResolver,  UFlagValueResolver   >(m, "UObjectFunctionFlagValueResolver")
        .def_readwrite("CheckRate", &UObjectFunctionFlagValueResolver::CheckRate)
        .def_readwrite("FunctionCall", &UObjectFunctionFlagValueResolver::FunctionCall)
          ;
}