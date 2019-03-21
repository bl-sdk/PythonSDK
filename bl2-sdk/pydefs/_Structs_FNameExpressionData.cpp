#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNameExpressionData()
{
    py::class_< FNameExpressionData >("FNameExpressionData")
        .def_readwrite("Expressions", &FNameExpressionData::Expressions)
        .def_readwrite("PreModifier", &FNameExpressionData::PreModifier)
        .def_readwrite("PostModifier", &FNameExpressionData::PostModifier)
  ;
}