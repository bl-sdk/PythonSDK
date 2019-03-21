#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSMExpressionList()
{
    py::class_< FSMExpressionList >("FSMExpressionList")
        .def_readwrite("Expression", &FSMExpressionList::Expression)
        .def_readwrite("SMD", &FSMExpressionList::SMD)
  ;
}