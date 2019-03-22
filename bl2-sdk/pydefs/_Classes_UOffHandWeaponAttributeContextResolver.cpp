#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOffHandWeaponAttributeContextResolver(py::module &m)
{
    py::class_< UOffHandWeaponAttributeContextResolver,  UAttributeContextResolver   >(m, "UOffHandWeaponAttributeContextResolver")
        .def("StaticClass", &UOffHandWeaponAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}