#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderInventoryPartSlot(py::object m)
{
    py::class_< FGearBuilderInventoryPartSlot >(m, "FGearBuilderInventoryPartSlot")
        .def_readwrite("PartName", &FGearBuilderInventoryPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderInventoryPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderInventoryPartSlot::WeightedPartList)
  ;
}