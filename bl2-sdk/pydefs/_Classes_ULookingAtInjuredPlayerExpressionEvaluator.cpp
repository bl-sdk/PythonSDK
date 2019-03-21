#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULookingAtInjuredPlayerExpressionEvaluator()
{
    class_< ULookingAtInjuredPlayerExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("ULookingAtInjuredPlayerExpressionEvaluator", no_init)
        .def("StaticClass", &ULookingAtInjuredPlayerExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &ULookingAtInjuredPlayerExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}