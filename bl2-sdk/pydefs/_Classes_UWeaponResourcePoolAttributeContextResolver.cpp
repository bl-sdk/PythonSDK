#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponResourcePoolAttributeContextResolver()
{
    py::class_< UWeaponResourcePoolAttributeContextResolver,  UAttributeContextResolver   >("UWeaponResourcePoolAttributeContextResolver")
        .def_readwrite("PrimaryHandResource", &UWeaponResourcePoolAttributeContextResolver::PrimaryHandResource)
        .def_readwrite("OffHandResource", &UWeaponResourcePoolAttributeContextResolver::OffHandResource)
        .def("StaticClass", &UWeaponResourcePoolAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}