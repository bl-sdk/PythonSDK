#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorParameterValueOverTime()
{
    class_< FVectorParameterValueOverTime, bases< FParameterValueOverTime >  >("FVectorParameterValueOverTime", no_init)
        .def_readwrite("ParameterValue", &FVectorParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FVectorParameterValueOverTime::ParameterValueCurve)
  ;
}