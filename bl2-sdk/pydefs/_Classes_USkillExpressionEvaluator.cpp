#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluator()
{
    py::class_< USkillExpressionEvaluator,  UExpressionEvaluator   >("USkillExpressionEvaluator")
        .def_readwrite("Skill", &USkillExpressionEvaluator::Skill)
        .def_readwrite("SkillState", &USkillExpressionEvaluator::SkillState)
        .def("StaticClass", &USkillExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &USkillExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}