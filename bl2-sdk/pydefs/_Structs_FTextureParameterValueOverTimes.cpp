#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureParameterValueOverTime(py::object m)
{
    py::class_< FTextureParameterValueOverTime,  FParameterValueOverTime   >(m, "FTextureParameterValueOverTime")
        .def_readwrite("ParameterValue", &FTextureParameterValueOverTime::ParameterValue)
  ;
}