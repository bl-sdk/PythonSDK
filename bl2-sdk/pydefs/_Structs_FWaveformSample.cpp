#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWaveformSample()
{
    class_< FWaveformSample >("FWaveformSample", no_init)
        .def_readwrite("LeftAmplitude", &FWaveformSample::LeftAmplitude)
        .def_readwrite("RightAmplitude", &FWaveformSample::RightAmplitude)
        .def_readwrite("LeftFunction", &FWaveformSample::LeftFunction)
        .def_readwrite("RightFunction", &FWaveformSample::RightFunction)
        .def_readwrite("Duration", &FWaveformSample::Duration)
  ;
}