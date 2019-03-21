#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleWeaponTypeDefinition()
{
    py::class_< UVehicleWeaponTypeDefinition,  UWeaponTypeDefinition   >("UVehicleWeaponTypeDefinition")
        .def_readwrite("WeaponMeshInstanceDataName", &UVehicleWeaponTypeDefinition::WeaponMeshInstanceDataName)
        .def("StaticClass", &UVehicleWeaponTypeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}