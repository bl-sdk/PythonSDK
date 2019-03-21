#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAICostExpressionEvaluator()
{
    class_< UAICostExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UAICostExpressionEvaluator", no_init)
        .def_readwrite("Multiplier", &UAICostExpressionEvaluator::Multiplier)
        .def_readwrite("PopDef", &UAICostExpressionEvaluator::PopDef)
        .def("StaticClass", &UAICostExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UAICostExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}