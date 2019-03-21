#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOccludedVolume(py::object m)
{
    py::class_< FOccludedVolume >(m, "FOccludedVolume")
        .def_readwrite("SoundVolume", &FOccludedVolume::SoundVolume)
        .def_readwrite("Target", &FOccludedVolume::Target)
        .def_readwrite("MaxOcclusion", &FOccludedVolume::MaxOcclusion)
        .def_readwrite("FadeDistance", &FOccludedVolume::FadeDistance)
  ;
}