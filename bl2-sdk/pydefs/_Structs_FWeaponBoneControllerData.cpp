#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponBoneControllerData()
{
    class_< FWeaponBoneControllerData >("FWeaponBoneControllerData", no_init)
        .def_readwrite("BoneName", &FWeaponBoneControllerData::BoneName)
        .def_readwrite("ControlType", &FWeaponBoneControllerData::ControlType)
        .def_readwrite("ControlTemplate", &FWeaponBoneControllerData::ControlTemplate)
  ;
}