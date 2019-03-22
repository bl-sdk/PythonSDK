#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTempWeaponStruct(py::module &m)
{
    py::class_< FTempWeaponStruct >(m, "FTempWeaponStruct")
        .def_readwrite("DefinitionData", &FTempWeaponStruct::DefinitionData)
        .def_readwrite("Ammo", &FTempWeaponStruct::Ammo)
  ;
}