#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWaveformSample()
{
    py::class_< FWaveformSample >("FWaveformSample")
        .def_readwrite("LeftAmplitude", &FWaveformSample::LeftAmplitude)
        .def_readwrite("RightAmplitude", &FWaveformSample::RightAmplitude)
        .def_readwrite("LeftFunction", &FWaveformSample::LeftFunction)
        .def_readwrite("RightFunction", &FWaveformSample::RightFunction)
        .def_readwrite("Duration", &FWaveformSample::Duration)
  ;
}