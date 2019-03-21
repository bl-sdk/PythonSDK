#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillConstraintData()
{
    class_< FSkillConstraintData >("FSkillConstraintData", no_init)
        .def_readwrite("OnFailure", &FSkillConstraintData::OnFailure)
        .def_readwrite("Evaluator", &FSkillConstraintData::Evaluator)
        .def_readwrite("EvaluatorDefinitions", &FSkillConstraintData::EvaluatorDefinitions)
  ;
}