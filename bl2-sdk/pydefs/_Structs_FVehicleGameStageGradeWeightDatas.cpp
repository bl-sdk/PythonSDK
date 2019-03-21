#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleGameStageGradeWeightData()
{
    py::class_< FVehicleGameStageGradeWeightData,  FGameStageGradeWeightData   >("FVehicleGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FVehicleGameStageGradeWeightData::GradeModifiers)
  ;
}