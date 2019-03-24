#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluator(py::module &m)
{
    py::class_< USkillExpressionEvaluator,  UExpressionEvaluator   >(m, "USkillExpressionEvaluator")
		.def_static("StaticClass", &USkillExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Skill", &USkillExpressionEvaluator::Skill)
        .def_readwrite("SkillState", &USkillExpressionEvaluator::SkillState)
        .def("Evaluate", &USkillExpressionEvaluator::Evaluate)
          ;
}