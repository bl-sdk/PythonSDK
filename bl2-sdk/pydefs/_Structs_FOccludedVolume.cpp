#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOccludedVolume()
{
    py::class_< FOccludedVolume >("FOccludedVolume")
        .def_readwrite("SoundVolume", &FOccludedVolume::SoundVolume)
        .def_readwrite("Target", &FOccludedVolume::Target)
        .def_readonly("UnknownData00", &FOccludedVolume::UnknownData00)
        .def_readwrite("MaxOcclusion", &FOccludedVolume::MaxOcclusion)
        .def_readwrite("FadeDistance", &FOccludedVolume::FadeDistance)
  ;
}