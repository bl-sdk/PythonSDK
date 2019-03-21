#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponAttributeMultiContextResolver()
{
    py::class_< UWeaponAttributeMultiContextResolver,  UAttributeMultiContextResolver   >("UWeaponAttributeMultiContextResolver")
        .def("StaticClass", &UWeaponAttributeMultiContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}