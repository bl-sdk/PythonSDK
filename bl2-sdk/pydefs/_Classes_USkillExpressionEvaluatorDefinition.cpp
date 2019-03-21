#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluatorDefinition()
{
    class_< USkillExpressionEvaluatorDefinition, bases< UGBXDefinition >  , boost::noncopyable>("USkillExpressionEvaluatorDefinition", no_init)
        .def_readwrite("Evaluator", &USkillExpressionEvaluatorDefinition::Evaluator)
        .def("StaticClass", &USkillExpressionEvaluatorDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}