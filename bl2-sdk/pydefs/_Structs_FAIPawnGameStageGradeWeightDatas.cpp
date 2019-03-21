#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIPawnGameStageGradeWeightData(py::object m)
{
    py::class_< FAIPawnGameStageGradeWeightData,  FGameStageGradeWeightData   >(m, "FAIPawnGameStageGradeWeightData")
        .def_readwrite("GradeModifiers", &FAIPawnGameStageGradeWeightData::GradeModifiers)
  ;
}