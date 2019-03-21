#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEffectSoundData()
{
    py::class_< FEffectSoundData >("FEffectSoundData")
        .def_readwrite("Type", &FEffectSoundData::Type)
        .def_readwrite("AkPlayingId", &FEffectSoundData::AkPlayingId)
  ;
}