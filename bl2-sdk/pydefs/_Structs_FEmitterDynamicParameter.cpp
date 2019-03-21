#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEmitterDynamicParameter()
{
    class_< FEmitterDynamicParameter >("FEmitterDynamicParameter", no_init)
        .def_readwrite("ParamName", &FEmitterDynamicParameter::ParamName)
        .def_readwrite("ValueMethod", &FEmitterDynamicParameter::ValueMethod)
        .def_readwrite("ParamValue", &FEmitterDynamicParameter::ParamValue)
  ;
}