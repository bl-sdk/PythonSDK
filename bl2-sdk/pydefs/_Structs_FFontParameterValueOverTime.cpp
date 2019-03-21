#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFontParameterValueOverTime()
{
    class_< FFontParameterValueOverTime >("FFontParameterValueOverTime", no_init)
        .def_readwrite("FontValue", &FFontParameterValueOverTime::FontValue)
        .def_readwrite("FontPage", &FFontParameterValueOverTime::FontPage)
        .def_readwrite("ExpressionGUID", &FParameterValueOverTime::ExpressionGUID)
        .def_readwrite("StartTime", &FParameterValueOverTime::StartTime)
        .def_readwrite("ParameterName", &FParameterValueOverTime::ParameterName)
        .def_readwrite("CycleTime", &FParameterValueOverTime::CycleTime)
        .def_readwrite("OffsetTime", &FParameterValueOverTime::OffsetTime)
  ;
}