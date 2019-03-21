#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarParameterValueOverTime(py::object m)
{
    py::class_< FScalarParameterValueOverTime,  FParameterValueOverTime   >(m, "FScalarParameterValueOverTime")
        .def_readwrite("ParameterValue", &FScalarParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FScalarParameterValueOverTime::ParameterValueCurve)
  ;
}