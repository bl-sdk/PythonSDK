#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillConstraintData()
{
    py::class_< FSkillConstraintData >("FSkillConstraintData")
        .def_readwrite("OnFailure", &FSkillConstraintData::OnFailure)
        .def_readwrite("Evaluator", &FSkillConstraintData::Evaluator)
        .def_readwrite("EvaluatorDefinitions", &FSkillConstraintData::EvaluatorDefinitions)
  ;
}