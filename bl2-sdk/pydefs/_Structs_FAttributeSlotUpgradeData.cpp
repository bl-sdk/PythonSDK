#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeSlotUpgradeData()
{
    py::class_< FAttributeSlotUpgradeData >("FAttributeSlotUpgradeData")
        .def_readwrite("SlotName", &FAttributeSlotUpgradeData::SlotName)
        .def_readwrite("GradeIncrease", &FAttributeSlotUpgradeData::GradeIncrease)
  ;
}