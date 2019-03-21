#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEmoteStance()
{
    class_< FEmoteStance >("FEmoteStance", no_init)
        .def_readwrite("Emote", &FEmoteStance::Emote)
        .def_readwrite("StanceSpecialMove", &FEmoteStance::StanceSpecialMove)
  ;
}