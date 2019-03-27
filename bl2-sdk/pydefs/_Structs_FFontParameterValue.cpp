#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontParameterValue(py::module &m)
{
    py::class_< FFontParameterValue >(m, "FFontParameterValue")
        .def_readwrite("ParameterName", &FFontParameterValue::ParameterName)
        .def_readwrite("FontValue", &FFontParameterValue::FontValue)
        .def_readwrite("FontPage", &FFontParameterValue::FontPage)
        .def_readwrite("ExpressionGUID", &FFontParameterValue::ExpressionGUID)
  ;
}