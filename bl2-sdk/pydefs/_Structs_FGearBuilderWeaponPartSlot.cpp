#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearBuilderWeaponPartSlot()
{
    class_< FGearBuilderWeaponPartSlot >("FGearBuilderWeaponPartSlot", no_init)
        .def_readwrite("PartName", &FGearBuilderWeaponPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderWeaponPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderWeaponPartSlot::WeightedPartList)
  ;
}