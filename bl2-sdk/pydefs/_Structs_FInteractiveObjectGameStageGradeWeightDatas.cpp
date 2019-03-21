#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteractiveObjectGameStageGradeWeightData()
{
    py::class_< FInteractiveObjectGameStageGradeWeightData,  FGameStageGradeWeightData   >("FInteractiveObjectGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FInteractiveObjectGameStageGradeWeightData::GradeModifiers)
  ;
}