#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarParameterValueOverTime()
{
    py::class_< FScalarParameterValueOverTime,  FParameterValueOverTime   >("FScalarParameterValueOverTime")
        .def_readwrite("ParameterValue", &FScalarParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FScalarParameterValueOverTime::ParameterValueCurve)
  ;
}