#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureParameterValue()
{
    py::class_< FTextureParameterValue >("FTextureParameterValue")
        .def_readwrite("ParameterName", &FTextureParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FTextureParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FTextureParameterValue::ExpressionGUID)
  ;
}