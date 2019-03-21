#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStateAttributeResolver()
{
    py::class_< UStateAttributeResolver,  UAttributeValueResolver   >("UStateAttributeResolver")
        .def_readwrite("NameKey", &UStateAttributeResolver::NameKey)
        .def("StaticClass", &UStateAttributeResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}