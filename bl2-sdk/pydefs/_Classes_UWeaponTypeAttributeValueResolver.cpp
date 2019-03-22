#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponTypeAttributeValueResolver(py::module &m)
{
    py::class_< UWeaponTypeAttributeValueResolver,  UAttributeValueResolver   >(m, "UWeaponTypeAttributeValueResolver")
        .def_readwrite("ValueIfNotMatched", &UWeaponTypeAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("WeaponTypes", &UWeaponTypeAttributeValueResolver::WeaponTypes)
        .def("StaticClass", &UWeaponTypeAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}