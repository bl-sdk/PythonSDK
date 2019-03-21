#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIPawnGameStageGradeWeightData()
{
    py::class_< FAIPawnGameStageGradeWeightData,  FGameStageGradeWeightData   >("FAIPawnGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FAIPawnGameStageGradeWeightData::GradeModifiers)
  ;
}