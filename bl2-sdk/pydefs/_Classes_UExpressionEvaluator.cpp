#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExpressionEvaluator()
{
    class_< UExpressionEvaluator, bases< UObject >  , boost::noncopyable>("UExpressionEvaluator", no_init)
        .def("StaticClass", &UExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}