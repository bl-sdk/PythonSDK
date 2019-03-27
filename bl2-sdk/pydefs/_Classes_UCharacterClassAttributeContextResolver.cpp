#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterClassAttributeContextResolver(py::module &m)
{
    py::class_< UCharacterClassAttributeContextResolver,  UAttributeContextResolver   >(m, "UCharacterClassAttributeContextResolver")
		.def_static("StaticClass", &UCharacterClassAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}