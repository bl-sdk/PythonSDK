#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDialogNameTagExpressionEvaluator()
{
    class_< UDialogNameTagExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UDialogNameTagExpressionEvaluator", no_init)
        .def_readwrite("NameTag", &UDialogNameTagExpressionEvaluator::NameTag)
        .def("StaticClass", &UDialogNameTagExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UDialogNameTagExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}