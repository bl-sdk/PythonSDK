#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOccludedVolume()
{
    class_< FOccludedVolume >("FOccludedVolume", no_init)
        .def_readwrite("SoundVolume", &FOccludedVolume::SoundVolume)
        .def_readwrite("Target", &FOccludedVolume::Target)
        .def_readonly("UnknownData00", &FOccludedVolume::UnknownData00)
        .def_readwrite("MaxOcclusion", &FOccludedVolume::MaxOcclusion)
        .def_readwrite("FadeDistance", &FOccludedVolume::FadeDistance)
  ;
}