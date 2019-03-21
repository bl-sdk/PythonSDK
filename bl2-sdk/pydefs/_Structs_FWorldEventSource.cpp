#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWorldEventSource()
{
    py::class_< FWorldEventSource >("FWorldEventSource")
        .def_readwrite("AkEvent", &FWorldEventSource::AkEvent)
        .def_readwrite("GroupActor", &FWorldEventSource::GroupActor)
        .def_readwrite("AkComponents", &FWorldEventSource::AkComponents)
        .def_readwrite("Sources", &FWorldEventSource::Sources)
        .def_readwrite("LastUpdateTime", &FWorldEventSource::LastUpdateTime)
  ;
}