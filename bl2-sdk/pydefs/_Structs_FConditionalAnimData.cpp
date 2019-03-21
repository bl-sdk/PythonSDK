#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalAnimData()
{
    py::class_< FConditionalAnimData >("FConditionalAnimData")
        .def_readwrite("Expression", &FConditionalAnimData::Expression)
        .def_readwrite("SpecialMove", &FConditionalAnimData::SpecialMove)
  ;
}