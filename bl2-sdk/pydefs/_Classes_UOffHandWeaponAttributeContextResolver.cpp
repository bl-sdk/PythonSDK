#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOffHandWeaponAttributeContextResolver(py::module &m)
{
    py::class_< UOffHandWeaponAttributeContextResolver,  UAttributeContextResolver   >(m, "UOffHandWeaponAttributeContextResolver")
		.def_static("StaticClass", &UOffHandWeaponAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}