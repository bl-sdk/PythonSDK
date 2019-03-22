#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponAmmoResourceAttributeValueResolver(py::module &m)
{
    py::class_< UWeaponAmmoResourceAttributeValueResolver,  UAttributeValueResolver   >(m, "UWeaponAmmoResourceAttributeValueResolver")
        .def_readwrite("ValueIfNotMatched", &UWeaponAmmoResourceAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("AmmoResources", &UWeaponAmmoResourceAttributeValueResolver::AmmoResources)
        .def("StaticClass", &UWeaponAmmoResourceAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}