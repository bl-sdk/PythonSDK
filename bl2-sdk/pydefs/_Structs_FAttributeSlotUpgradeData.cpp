#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeSlotUpgradeData(py::module &m)
{
    py::class_< FAttributeSlotUpgradeData >(m, "FAttributeSlotUpgradeData")
        .def_readwrite("SlotName", &FAttributeSlotUpgradeData::SlotName)
        .def_readwrite("GradeIncrease", &FAttributeSlotUpgradeData::GradeIncrease)
  ;
}