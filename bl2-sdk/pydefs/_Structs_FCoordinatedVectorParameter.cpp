#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedVectorParameter()
{
    class_< FCoordinatedVectorParameter >("FCoordinatedVectorParameter", no_init)
        .def_readwrite("ParamName", &FCoordinatedVectorParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedVectorParameter::ParamValueOverTime)
  ;
}