#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTurretWeaponTypeDefinition()
{
    py::class_< UTurretWeaponTypeDefinition,  UWeaponTypeDefinition   >("UTurretWeaponTypeDefinition")
        .def("StaticClass", &UTurretWeaponTypeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}