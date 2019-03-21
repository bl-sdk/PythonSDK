#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRtpcParameterValue()
{
    class_< FRtpcParameterValue >("FRtpcParameterValue", no_init)
        .def_readwrite("AkRtpc", &FRtpcParameterValue::AkRtpc)
        .def_readwrite("Value", &FRtpcParameterValue::Value)
  ;
}