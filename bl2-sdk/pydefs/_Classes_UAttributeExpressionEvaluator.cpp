#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeExpressionEvaluator()
{
    class_< UAttributeExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UAttributeExpressionEvaluator", no_init)
        .def_readwrite("Expression", &UAttributeExpressionEvaluator::Expression)
        .def("StaticClass", &UAttributeExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UAttributeExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}