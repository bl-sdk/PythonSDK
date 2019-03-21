#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluatorDefinition(py::object m)
{
    py::class_< USkillExpressionEvaluatorDefinition,  UGBXDefinition   >(m, "USkillExpressionEvaluatorDefinition")
        .def_readwrite("Evaluator", &USkillExpressionEvaluatorDefinition::Evaluator)
        .def("StaticClass", &USkillExpressionEvaluatorDefinition::StaticClass, py::return_value_policy::reference)
          ;
}