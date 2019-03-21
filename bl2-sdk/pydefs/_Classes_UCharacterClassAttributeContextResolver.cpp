#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterClassAttributeContextResolver(py::object m)
{
    py::class_< UCharacterClassAttributeContextResolver,  UAttributeContextResolver   >(m, "UCharacterClassAttributeContextResolver")
        .def("StaticClass", &UCharacterClassAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}