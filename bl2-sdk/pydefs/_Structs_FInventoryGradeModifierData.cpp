#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventoryGradeModifierData()
{
    class_< FInventoryGradeModifierData >("FInventoryGradeModifierData", no_init)
        .def_readwrite("ExpLevel", &FInventoryGradeModifierData::ExpLevel)
        .def_readwrite("CustomInventoryDefinition", &FInventoryGradeModifierData::CustomInventoryDefinition)
  ;
}