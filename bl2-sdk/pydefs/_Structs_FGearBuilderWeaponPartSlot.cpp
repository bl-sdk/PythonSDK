#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderWeaponPartSlot(py::module &m)
{
    py::class_< FGearBuilderWeaponPartSlot >(m, "FGearBuilderWeaponPartSlot")
        .def_readwrite("PartName", &FGearBuilderWeaponPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderWeaponPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderWeaponPartSlot::WeightedPartList)
  ;
}