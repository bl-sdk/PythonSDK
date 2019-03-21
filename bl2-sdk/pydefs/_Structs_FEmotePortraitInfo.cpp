#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEmotePortraitInfo(py::object m)
{
    py::class_< FEmotePortraitInfo >(m, "FEmotePortraitInfo")
        .def_readwrite("Emote", &FEmotePortraitInfo::Emote)
        .def_readwrite("EmotePortrait", &FEmotePortraitInfo::EmotePortrait)
  ;
}