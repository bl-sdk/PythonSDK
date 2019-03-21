#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeSlotUpgradeData()
{
    class_< FAttributeSlotUpgradeData >("FAttributeSlotUpgradeData", no_init)
        .def_readwrite("SlotName", &FAttributeSlotUpgradeData::SlotName)
        .def_readwrite("GradeIncrease", &FAttributeSlotUpgradeData::GradeIncrease)
  ;
}