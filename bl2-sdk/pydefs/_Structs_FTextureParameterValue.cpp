#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureParameterValue(py::object m)
{
    py::class_< FTextureParameterValue >(m, "FTextureParameterValue")
        .def_readwrite("ParameterName", &FTextureParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FTextureParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FTextureParameterValue::ExpressionGUID)
  ;
}