#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontParameterValueOverTime(py::object m)
{
    py::class_< FFontParameterValueOverTime >(m, "FFontParameterValueOverTime")
        .def_readwrite("FontValue", &FFontParameterValueOverTime::FontValue)
        .def_readwrite("FontPage", &FFontParameterValueOverTime::FontPage)
        .def_readwrite("ExpressionGUID", &FParameterValueOverTime::ExpressionGUID)
        .def_readwrite("StartTime", &FParameterValueOverTime::StartTime)
        .def_readwrite("ParameterName", &FParameterValueOverTime::ParameterName)
        .def_readwrite("CycleTime", &FParameterValueOverTime::CycleTime)
        .def_readwrite("OffsetTime", &FParameterValueOverTime::OffsetTime)
  ;
}