#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScalarParameterValueOverTime()
{
    class_< FScalarParameterValueOverTime, bases< FParameterValueOverTime >  >("FScalarParameterValueOverTime", no_init)
        .def_readwrite("ParameterValue", &FScalarParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FScalarParameterValueOverTime::ParameterValueCurve)
  ;
}