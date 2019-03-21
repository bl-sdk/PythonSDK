#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDrunkenWaveFormData()
{
    class_< FDrunkenWaveFormData >("FDrunkenWaveFormData", no_init)
        .def_readwrite("WaveFreq", &FDrunkenWaveFormData::WaveFreq)
        .def_readwrite("WaveAmp", &FDrunkenWaveFormData::WaveAmp)
        .def_readwrite("WavePhase", &FDrunkenWaveFormData::WavePhase)
  ;
}