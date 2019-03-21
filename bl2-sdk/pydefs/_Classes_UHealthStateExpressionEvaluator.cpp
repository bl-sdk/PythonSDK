#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHealthStateExpressionEvaluator()
{
    class_< UHealthStateExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UHealthStateExpressionEvaluator", no_init)
        .def("StaticClass", &UHealthStateExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UHealthStateExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}