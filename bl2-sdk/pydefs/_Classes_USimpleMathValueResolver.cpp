#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USimpleMathValueResolver(py::object m)
{
    py::class_< USimpleMathValueResolver,  UAttributeValueResolver   >(m, "USimpleMathValueResolver")
        .def_readwrite("Arg1Option", &USimpleMathValueResolver::Arg1Option)
        .def_readwrite("Operand", &USimpleMathValueResolver::Operand)
        .def_readwrite("Arg1Attribute", &USimpleMathValueResolver::Arg1Attribute)
        .def_readwrite("Argument", &USimpleMathValueResolver::Argument)
        .def("StaticClass", &USimpleMathValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}