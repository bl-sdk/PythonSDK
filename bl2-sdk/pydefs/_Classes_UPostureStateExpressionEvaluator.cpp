#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPostureStateExpressionEvaluator()
{
    class_< UPostureStateExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UPostureStateExpressionEvaluator", no_init)
        .def("StaticClass", &UPostureStateExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UPostureStateExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}