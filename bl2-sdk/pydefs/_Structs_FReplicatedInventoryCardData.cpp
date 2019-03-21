#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedInventoryCardData(py::object m)
{
    py::class_< FReplicatedInventoryCardData >(m, "FReplicatedInventoryCardData")
        .def_readwrite("ModifierValue", &FReplicatedInventoryCardData::ModifierValue)
        .def_readwrite("ModifierStatIndex", &FReplicatedInventoryCardData::ModifierStatIndex)
  ;
}