#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalInitializationExpressions()
{
    class_< FConditionalInitializationExpressions >("FConditionalInitializationExpressions", no_init)
        .def_readwrite("ConditionalExpressionList", &FConditionalInitializationExpressions::ConditionalExpressionList)
        .def_readwrite("DefaultBaseValue", &FConditionalInitializationExpressions::DefaultBaseValue)
  ;
}