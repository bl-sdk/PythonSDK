#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventoryGameStageGradeWeightData()
{
    py::class_< FInventoryGameStageGradeWeightData,  FGameStageGradeWeightData   >("FInventoryGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FInventoryGameStageGradeWeightData::GradeModifiers)
  ;
}