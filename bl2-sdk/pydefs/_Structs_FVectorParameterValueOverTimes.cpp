#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorParameterValueOverTime()
{
    py::class_< FVectorParameterValueOverTime,  FParameterValueOverTime   >("FVectorParameterValueOverTime")
        .def_readwrite("ParameterValue", &FVectorParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FVectorParameterValueOverTime::ParameterValueCurve)
  ;
}