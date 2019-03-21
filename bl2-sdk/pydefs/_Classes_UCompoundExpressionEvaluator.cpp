#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCompoundExpressionEvaluator()
{
    class_< UCompoundExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UCompoundExpressionEvaluator", no_init)
        .def_readwrite("Expression1", &UCompoundExpressionEvaluator::Expression1)
        .def_readwrite("Operator", &UCompoundExpressionEvaluator::Operator)
        .def_readwrite("Expression2", &UCompoundExpressionEvaluator::Expression2)
        .def("StaticClass", &UCompoundExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UCompoundExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}