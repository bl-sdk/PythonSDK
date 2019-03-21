#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEmotePortraitInfo()
{
    py::class_< FEmotePortraitInfo >("FEmotePortraitInfo")
        .def_readwrite("Emote", &FEmotePortraitInfo::Emote)
        .def_readwrite("EmotePortrait", &FEmotePortraitInfo::EmotePortrait)
  ;
}