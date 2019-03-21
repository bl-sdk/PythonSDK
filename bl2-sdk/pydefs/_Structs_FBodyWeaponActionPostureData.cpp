#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBodyWeaponActionPostureData()
{
    class_< FBodyWeaponActionPostureData >("FBodyWeaponActionPostureData", no_init)
        .def_readwrite("Posture", &FBodyWeaponActionPostureData::Posture)
        .def_readwrite("Actions", &FBodyWeaponActionPostureData::Actions)
  ;
}