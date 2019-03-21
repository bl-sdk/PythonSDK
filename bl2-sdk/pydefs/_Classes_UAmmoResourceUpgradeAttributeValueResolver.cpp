#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAmmoResourceUpgradeAttributeValueResolver()
{
    py::class_< UAmmoResourceUpgradeAttributeValueResolver,  UAttributeValueResolver   >("UAmmoResourceUpgradeAttributeValueResolver")
        .def_readwrite("AssociatedResource", &UAmmoResourceUpgradeAttributeValueResolver::AssociatedResource)
        .def_readwrite("AmmoResourceUpgradesArrayIndex", &UAmmoResourceUpgradeAttributeValueResolver::AmmoResourceUpgradesArrayIndex)
        .def("StaticClass", &UAmmoResourceUpgradeAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}