#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillExpressionEvaluator()
{
    class_< USkillExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("USkillExpressionEvaluator", no_init)
        .def_readwrite("Skill", &USkillExpressionEvaluator::Skill)
        .def_readwrite("SkillState", &USkillExpressionEvaluator::SkillState)
        .def("StaticClass", &USkillExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &USkillExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}