#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarParameterValue(py::module &m)
{
    py::class_< FScalarParameterValue >(m, "FScalarParameterValue")
        .def_readwrite("ParameterName", &FScalarParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FScalarParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FScalarParameterValue::ExpressionGUID)
  ;
}