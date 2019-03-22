#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalAnimData(py::module &m)
{
    py::class_< FConditionalAnimData >(m, "FConditionalAnimData")
        .def_readwrite("Expression", &FConditionalAnimData::Expression)
        .def_readwrite("SpecialMove", &FConditionalAnimData::SpecialMove)
  ;
}