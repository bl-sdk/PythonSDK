#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInteractiveObjectGradeModifierData()
{
    class_< FInteractiveObjectGradeModifierData >("FInteractiveObjectGradeModifierData", no_init)
        .def_readwrite("CustomInteractiveObject", &FInteractiveObjectGradeModifierData::CustomInteractiveObject)
        .def_readwrite("DisplayName", &FInteractiveObjectGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FInteractiveObjectGradeModifierData::ExpLevel)
        .def_readwrite("IncludedCustomLootLists", &FInteractiveObjectGradeModifierData::IncludedCustomLootLists)
        .def_readwrite("CustomLoot", &FInteractiveObjectGradeModifierData::CustomLoot)
  ;
}