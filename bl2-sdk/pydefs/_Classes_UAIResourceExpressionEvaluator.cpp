#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIResourceExpressionEvaluator()
{
    class_< UAIResourceExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UAIResourceExpressionEvaluator", no_init)
        .def_readwrite("Option", &UAIResourceExpressionEvaluator::Option)
        .def_readwrite("Resource", &UAIResourceExpressionEvaluator::Resource)
        .def("StaticClass", &UAIResourceExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UAIResourceExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}