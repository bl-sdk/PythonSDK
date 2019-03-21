#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWorldEventSource()
{
    class_< FWorldEventSource >("FWorldEventSource", no_init)
        .def_readwrite("AkEvent", &FWorldEventSource::AkEvent)
        .def_readwrite("GroupActor", &FWorldEventSource::GroupActor)
        .def_readwrite("AkComponents", &FWorldEventSource::AkComponents)
        .def_readwrite("Sources", &FWorldEventSource::Sources)
        .def_readwrite("LastUpdateTime", &FWorldEventSource::LastUpdateTime)
  ;
}