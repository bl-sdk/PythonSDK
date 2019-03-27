#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParameterValueOverTime(py::module &m)
{
    py::class_< FParameterValueOverTime >(m, "FParameterValueOverTime")
        .def_readwrite("ExpressionGUID", &FParameterValueOverTime::ExpressionGUID)
        .def_readwrite("StartTime", &FParameterValueOverTime::StartTime)
        .def_readwrite("ParameterName", &FParameterValueOverTime::ParameterName)
        .def_readwrite("CycleTime", &FParameterValueOverTime::CycleTime)
        .def_readwrite("OffsetTime", &FParameterValueOverTime::OffsetTime)
  ;
}