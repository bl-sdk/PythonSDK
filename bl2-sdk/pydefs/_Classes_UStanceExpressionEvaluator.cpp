#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStanceExpressionEvaluator()
{
    class_< UStanceExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UStanceExpressionEvaluator", no_init)
        .def_readwrite("Stance", &UStanceExpressionEvaluator::Stance)
        .def_readwrite("Option", &UStanceExpressionEvaluator::Option)
        .def("StaticClass", &UStanceExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UStanceExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}