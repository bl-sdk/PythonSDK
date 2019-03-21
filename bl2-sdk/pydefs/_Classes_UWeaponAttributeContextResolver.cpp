#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponAttributeContextResolver(py::object m)
{
    py::class_< UWeaponAttributeContextResolver,  UAttributeContextResolver   >(m, "UWeaponAttributeContextResolver")
        .def("StaticClass", &UWeaponAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}