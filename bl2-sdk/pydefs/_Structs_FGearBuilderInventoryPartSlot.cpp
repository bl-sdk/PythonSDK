#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearBuilderInventoryPartSlot()
{
    class_< FGearBuilderInventoryPartSlot >("FGearBuilderInventoryPartSlot", no_init)
        .def_readwrite("PartName", &FGearBuilderInventoryPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderInventoryPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderInventoryPartSlot::WeightedPartList)
  ;
}