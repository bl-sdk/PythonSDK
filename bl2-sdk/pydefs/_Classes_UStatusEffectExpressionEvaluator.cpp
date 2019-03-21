#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStatusEffectExpressionEvaluator()
{
    class_< UStatusEffectExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UStatusEffectExpressionEvaluator", no_init)
        .def_readwrite("Type", &UStatusEffectExpressionEvaluator::Type)
        .def_readwrite("EffectState", &UStatusEffectExpressionEvaluator::EffectState)
        .def("StaticClass", &UStatusEffectExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UStatusEffectExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}