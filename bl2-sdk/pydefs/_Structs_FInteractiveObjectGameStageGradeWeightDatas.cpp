#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteractiveObjectGameStageGradeWeightData(py::module &m)
{
    py::class_< FInteractiveObjectGameStageGradeWeightData,  FGameStageGradeWeightData   >(m, "FInteractiveObjectGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FInteractiveObjectGameStageGradeWeightData::GradeModifiers)
  ;
}