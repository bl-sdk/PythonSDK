#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponCustomPartTypeData()
{
    class_< FWeaponCustomPartTypeData >("FWeaponCustomPartTypeData", no_init)
        .def_readwrite("WeightedParts", &FWeaponCustomPartTypeData::WeightedParts)
  ;
}