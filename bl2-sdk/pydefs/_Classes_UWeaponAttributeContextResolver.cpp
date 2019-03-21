#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponAttributeContextResolver()
{
    py::class_< UWeaponAttributeContextResolver,  UAttributeContextResolver   >("UWeaponAttributeContextResolver")
        .def("StaticClass", &UWeaponAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}