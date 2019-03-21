#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInjuredLoopOverride()
{
    class_< FInjuredLoopOverride >("FInjuredLoopOverride", no_init)
        .def_readwrite("NameTag", &FInjuredLoopOverride::NameTag)
        .def_readwrite("StartAkEvent", &FInjuredLoopOverride::StartAkEvent)
  ;
}