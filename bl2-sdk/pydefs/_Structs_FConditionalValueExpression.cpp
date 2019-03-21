#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalValueExpression(py::object m)
{
    py::class_< FConditionalValueExpression >(m, "FConditionalValueExpression")
        .def_readwrite("BaseValueIfTrue", &FConditionalValueExpression::BaseValueIfTrue)
        .def_readwrite("Expressions", &FConditionalValueExpression::Expressions)
  ;
}