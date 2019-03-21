#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExpressionEvaluatorDefinition()
{
    class_< UExpressionEvaluatorDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UExpressionEvaluatorDefinition", no_init)
        .def_readwrite("Expression", &UExpressionEvaluatorDefinition::Expression)
        .def("StaticClass", &UExpressionEvaluatorDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UExpressionEvaluatorDefinition::Evaluate)
        .staticmethod("StaticClass")
  ;
}