#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextureParameterValueOverTime()
{
    class_< FTextureParameterValueOverTime, bases< FParameterValueOverTime >  >("FTextureParameterValueOverTime", no_init)
        .def_readwrite("ParameterValue", &FTextureParameterValueOverTime::ParameterValue)
  ;
}