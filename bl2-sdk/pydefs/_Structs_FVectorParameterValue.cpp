#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorParameterValue()
{
    py::class_< FVectorParameterValue >("FVectorParameterValue")
        .def_readwrite("ParameterName", &FVectorParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FVectorParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FVectorParameterValue::ExpressionGUID)
  ;
}