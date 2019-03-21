#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontParameterValue()
{
    py::class_< FFontParameterValue >("FFontParameterValue")
        .def_readwrite("ParameterName", &FFontParameterValue::ParameterName)
        .def_readwrite("FontValue", &FFontParameterValue::FontValue)
        .def_readwrite("FontPage", &FFontParameterValue::FontPage)
        .def_readwrite("ExpressionGUID", &FFontParameterValue::ExpressionGUID)
  ;
}