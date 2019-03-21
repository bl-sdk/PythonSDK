#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedInventoryCardData()
{
    py::class_< FReplicatedInventoryCardData >("FReplicatedInventoryCardData")
        .def_readwrite("ModifierValue", &FReplicatedInventoryCardData::ModifierValue)
        .def_readwrite("ModifierStatIndex", &FReplicatedInventoryCardData::ModifierStatIndex)
  ;
}