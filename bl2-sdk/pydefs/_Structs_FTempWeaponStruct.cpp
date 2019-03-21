#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTempWeaponStruct()
{
    py::class_< FTempWeaponStruct >("FTempWeaponStruct")
        .def_readwrite("DefinitionData", &FTempWeaponStruct::DefinitionData)
        .def_readwrite("Ammo", &FTempWeaponStruct::Ammo)
  ;
}