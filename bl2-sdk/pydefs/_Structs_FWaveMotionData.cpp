#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWaveMotionData()
{
    class_< FWaveMotionData >("FWaveMotionData", no_init)
        .def_readwrite("WaveFreq", &FWaveMotionData::WaveFreq)
        .def_readwrite("WaveAmp", &FWaveMotionData::WaveAmp)
        .def_readwrite("WavePhase", &FWaveMotionData::WavePhase)
  ;
}