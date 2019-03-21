#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverDebugPriority()
{
    class_< FCoverDebugPriority >("FCoverDebugPriority", no_init)
        .def_readwrite("Score", &FCoverDebugPriority::Score)
        .def_readwrite("Distance", &FCoverDebugPriority::Distance)
        .def_readwrite("TheCoverActor", &FCoverDebugPriority::TheCoverActor)
        .def_readwrite("SlotNdx", &FCoverDebugPriority::SlotNdx)
        .def_readwrite("FailString", &FCoverDebugPriority::FailString)
        .def_readwrite("ScoringInfo", &FCoverDebugPriority::ScoringInfo)
  ;
}