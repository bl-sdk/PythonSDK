#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAudioEQEffect()
{
    py::class_< FAudioEQEffect >("FAudioEQEffect")
        .def_readwrite("RootTime", &FAudioEQEffect::RootTime)
        .def_readwrite("HFFrequency", &FAudioEQEffect::HFFrequency)
        .def_readwrite("HFGain", &FAudioEQEffect::HFGain)
        .def_readwrite("MFCutoffFrequency", &FAudioEQEffect::MFCutoffFrequency)
        .def_readwrite("MFBandwidth", &FAudioEQEffect::MFBandwidth)
        .def_readwrite("MFGain", &FAudioEQEffect::MFGain)
        .def_readwrite("LFFrequency", &FAudioEQEffect::LFFrequency)
        .def_readwrite("LFGain", &FAudioEQEffect::LFGain)
  ;
}