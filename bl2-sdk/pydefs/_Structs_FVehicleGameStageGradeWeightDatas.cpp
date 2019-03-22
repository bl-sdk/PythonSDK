#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleGameStageGradeWeightData(py::module &m)
{
    py::class_< FVehicleGameStageGradeWeightData,  FGameStageGradeWeightData   >(m, "FVehicleGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FVehicleGameStageGradeWeightData::GradeModifiers)
  ;
}