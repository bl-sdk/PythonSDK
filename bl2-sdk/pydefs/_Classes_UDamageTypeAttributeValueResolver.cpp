#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageTypeAttributeValueResolver()
{
    py::class_< UDamageTypeAttributeValueResolver,  UAttributeValueResolver   >("UDamageTypeAttributeValueResolver")
        .def_readwrite("ValueIfNotMatched", &UDamageTypeAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("DamageTypes", &UDamageTypeAttributeValueResolver::DamageTypes)
        .def("StaticClass", &UDamageTypeAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}