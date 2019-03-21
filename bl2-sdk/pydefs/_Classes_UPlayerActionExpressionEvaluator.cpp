#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerActionExpressionEvaluator()
{
    class_< UPlayerActionExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UPlayerActionExpressionEvaluator", no_init)
        .def_readwrite("EvalActions", &UPlayerActionExpressionEvaluator::EvalActions)
        .def("StaticClass", &UPlayerActionExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UPlayerActionExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}