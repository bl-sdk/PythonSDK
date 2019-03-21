#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAudioEQEffect()
{
    class_< FAudioEQEffect >("FAudioEQEffect", no_init)
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