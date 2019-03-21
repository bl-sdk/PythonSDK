#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluatorDefinition()
{
    py::class_< USkillExpressionEvaluatorDefinition,  UGBXDefinition   >("USkillExpressionEvaluatorDefinition")
        .def_readwrite("Evaluator", &USkillExpressionEvaluatorDefinition::Evaluator)
        .def("StaticClass", &USkillExpressionEvaluatorDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}