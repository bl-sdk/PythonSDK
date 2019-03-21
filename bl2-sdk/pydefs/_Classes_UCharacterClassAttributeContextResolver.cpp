#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterClassAttributeContextResolver()
{
    py::class_< UCharacterClassAttributeContextResolver,  UAttributeContextResolver   >("UCharacterClassAttributeContextResolver")
        .def("StaticClass", &UCharacterClassAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}