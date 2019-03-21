#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameStageGradeWeightData()
{
    class_< FGameStageGradeWeightData >("FGameStageGradeWeightData", no_init)
        .def_readwrite("GameStageRequirement", &FGameStageGradeWeightData::GameStageRequirement)
        .def_readwrite("MinSpawnProbabilityModifier", &FGameStageGradeWeightData::MinSpawnProbabilityModifier)
        .def_readwrite("MaxSpawnProbabilityModifier", &FGameStageGradeWeightData::MaxSpawnProbabilityModifier)
  ;
}