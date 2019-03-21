#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventoryGradeModifierData()
{
    py::class_< FInventoryGradeModifierData >("FInventoryGradeModifierData")
        .def_readwrite("ExpLevel", &FInventoryGradeModifierData::ExpLevel)
        .def_readwrite("CustomInventoryDefinition", &FInventoryGradeModifierData::CustomInventoryDefinition)
  ;
}