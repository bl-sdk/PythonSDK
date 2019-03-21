#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRTPCSetting()
{
    class_< FRTPCSetting >("FRTPCSetting", no_init)
        .def_readwrite("Target", &FRTPCSetting::Target)
        .def_readwrite("AkRtpc", &FRTPCSetting::AkRtpc)
        .def_readwrite("ValueAtMaxRange", &FRTPCSetting::ValueAtMaxRange)
        .def_readwrite("ValueWithinVolume", &FRTPCSetting::ValueWithinVolume)
        .def_readwrite("FadeDistance", &FRTPCSetting::FadeDistance)
        .def_readwrite("LastEvalValue", &FRTPCSetting::LastEvalValue)
  ;
}