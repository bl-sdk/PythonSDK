#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEmotePortraitInfo()
{
    class_< FEmotePortraitInfo >("FEmotePortraitInfo", no_init)
        .def_readwrite("Emote", &FEmotePortraitInfo::Emote)
        .def_readwrite("EmotePortrait", &FEmotePortraitInfo::EmotePortrait)
  ;
}