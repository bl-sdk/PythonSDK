#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderWeaponPartSlot()
{
    py::class_< FGearBuilderWeaponPartSlot >("FGearBuilderWeaponPartSlot")
        .def_readwrite("PartName", &FGearBuilderWeaponPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderWeaponPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderWeaponPartSlot::WeightedPartList)
  ;
}