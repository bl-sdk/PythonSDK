#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponClassEventData()
{
    class_< FWeaponClassEventData >("FWeaponClassEventData", no_init)
        .def_readwrite("WeaponClassName", &FWeaponClassEventData::WeaponClassName)
  ;
}