#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTempWeaponStruct()
{
    class_< FTempWeaponStruct >("FTempWeaponStruct", no_init)
        .def_readwrite("DefinitionData", &FTempWeaponStruct::DefinitionData)
        .def_readwrite("Ammo", &FTempWeaponStruct::Ammo)
  ;
}