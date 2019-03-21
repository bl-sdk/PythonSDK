#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOffHandWeaponAttributeContextResolver()
{
    py::class_< UOffHandWeaponAttributeContextResolver,  UAttributeContextResolver   >("UOffHandWeaponAttributeContextResolver")
        .def("StaticClass", &UOffHandWeaponAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}