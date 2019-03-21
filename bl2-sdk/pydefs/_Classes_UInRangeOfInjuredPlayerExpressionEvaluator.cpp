#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInRangeOfInjuredPlayerExpressionEvaluator()
{
    class_< UInRangeOfInjuredPlayerExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UInRangeOfInjuredPlayerExpressionEvaluator", no_init)
        .def("StaticClass", &UInRangeOfInjuredPlayerExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UInRangeOfInjuredPlayerExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}