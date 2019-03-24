#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageTypeAttributeValueResolver(py::module &m)
{
    py::class_< UDamageTypeAttributeValueResolver,  UAttributeValueResolver   >(m, "UDamageTypeAttributeValueResolver")
		.def_static("StaticClass", &UDamageTypeAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueIfNotMatched", &UDamageTypeAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("DamageTypes", &UDamageTypeAttributeValueResolver::DamageTypes)
          ;
}