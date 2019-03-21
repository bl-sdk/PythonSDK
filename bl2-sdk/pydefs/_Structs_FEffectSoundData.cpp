#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEffectSoundData(py::object m)
{
    py::class_< FEffectSoundData >(m, "FEffectSoundData")
        .def_readwrite("Type", &FEffectSoundData::Type)
        .def_readwrite("AkPlayingId", &FEffectSoundData::AkPlayingId)
  ;
}