#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventoryGradeModifierData(py::module &m)
{
    py::class_< FInventoryGradeModifierData >(m, "FInventoryGradeModifierData")
        .def_readwrite("ExpLevel", &FInventoryGradeModifierData::ExpLevel)
        .def_readwrite("CustomInventoryDefinition", &FInventoryGradeModifierData::CustomInventoryDefinition)
  ;
}