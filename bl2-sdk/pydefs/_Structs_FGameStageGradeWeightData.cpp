#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameStageGradeWeightData(py::object m)
{
    py::class_< FGameStageGradeWeightData >(m, "FGameStageGradeWeightData")
        .def_readwrite("GameStageRequirement", &FGameStageGradeWeightData::GameStageRequirement)
        .def_readwrite("MinSpawnProbabilityModifier", &FGameStageGradeWeightData::MinSpawnProbabilityModifier)
        .def_readwrite("MaxSpawnProbabilityModifier", &FGameStageGradeWeightData::MaxSpawnProbabilityModifier)
  ;
}