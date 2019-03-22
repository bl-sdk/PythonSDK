#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponScopeGFxDefinition(py::module &m)
{
    py::class_< UWeaponScopeGFxDefinition,  UWillowGFxMovie3DDefinition   >(m, "UWeaponScopeGFxDefinition")
        .def_readwrite("LinkageMappings_Manufacturers", &UWeaponScopeGFxDefinition::LinkageMappings_Manufacturers)
        .def_readwrite("LinkageMappings_WeaponTypes", &UWeaponScopeGFxDefinition::LinkageMappings_WeaponTypes)
        .def("StaticClass", &UWeaponScopeGFxDefinition::StaticClass, py::return_value_policy::reference)
          ;
}