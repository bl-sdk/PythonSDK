#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTurretWeaponTypeDefinition(py::module &m)
{
    py::class_< UTurretWeaponTypeDefinition,  UWeaponTypeDefinition   >(m, "UTurretWeaponTypeDefinition")
		.def_static("StaticClass", &UTurretWeaponTypeDefinition::StaticClass, py::return_value_policy::reference)
          ;
}