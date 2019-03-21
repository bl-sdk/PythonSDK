#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBuzzaxeWeaponTypeDefinition()
{
    py::class_< UBuzzaxeWeaponTypeDefinition,  UWeaponTypeDefinition   >("UBuzzaxeWeaponTypeDefinition")
        .def("StaticClass", &UBuzzaxeWeaponTypeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}