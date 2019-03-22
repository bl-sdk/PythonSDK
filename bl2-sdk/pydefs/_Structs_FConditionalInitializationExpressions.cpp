#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalInitializationExpressions(py::module &m)
{
    py::class_< FConditionalInitializationExpressions >(m, "FConditionalInitializationExpressions")
        .def_readwrite("ConditionalExpressionList", &FConditionalInitializationExpressions::ConditionalExpressionList)
        .def_readwrite("DefaultBaseValue", &FConditionalInitializationExpressions::DefaultBaseValue)
  ;
}