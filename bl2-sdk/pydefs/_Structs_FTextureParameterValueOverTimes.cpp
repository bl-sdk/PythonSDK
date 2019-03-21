#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureParameterValueOverTime()
{
    py::class_< FTextureParameterValueOverTime,  FParameterValueOverTime   >("FTextureParameterValueOverTime")
        .def_readwrite("ParameterValue", &FTextureParameterValueOverTime::ParameterValue)
  ;
}