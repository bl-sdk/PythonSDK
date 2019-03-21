#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugTextInfo()
{
    class_< FDebugTextInfo >("FDebugTextInfo", no_init)
        .def_readwrite("SrcActor", &FDebugTextInfo::SrcActor)
        .def_readwrite("SrcActorOffset", &FDebugTextInfo::SrcActorOffset)
        .def_readwrite("SrcActorDesiredOffset", &FDebugTextInfo::SrcActorDesiredOffset)
        .def_readwrite("DebugText", &FDebugTextInfo::DebugText)
        .def_readwrite("TimeRemaining", &FDebugTextInfo::TimeRemaining)
        .def_readwrite("Duration", &FDebugTextInfo::Duration)
        .def_readwrite("TextColor", &FDebugTextInfo::TextColor)
        .def_readwrite("OrigActorLocation", &FDebugTextInfo::OrigActorLocation)
        .def_readwrite("Font", &FDebugTextInfo::Font)
  ;
}