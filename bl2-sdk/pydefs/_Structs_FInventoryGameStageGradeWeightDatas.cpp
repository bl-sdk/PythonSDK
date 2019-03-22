#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventoryGameStageGradeWeightData(py::module &m)
{
    py::class_< FInventoryGameStageGradeWeightData,  FGameStageGradeWeightData   >(m, "FInventoryGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FInventoryGameStageGradeWeightData::GradeModifiers)
  ;
}