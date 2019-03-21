#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalValueExpression()
{
    class_< FConditionalValueExpression >("FConditionalValueExpression", no_init)
        .def_readwrite("BaseValueIfTrue", &FConditionalValueExpression::BaseValueIfTrue)
        .def_readwrite("Expressions", &FConditionalValueExpression::Expressions)
  ;
}