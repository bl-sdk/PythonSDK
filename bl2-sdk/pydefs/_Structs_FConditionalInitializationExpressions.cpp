#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalInitializationExpressions()
{
    py::class_< FConditionalInitializationExpressions >("FConditionalInitializationExpressions")
        .def_readwrite("ConditionalExpressionList", &FConditionalInitializationExpressions::ConditionalExpressionList)
        .def_readwrite("DefaultBaseValue", &FConditionalInitializationExpressions::DefaultBaseValue)
  ;
}