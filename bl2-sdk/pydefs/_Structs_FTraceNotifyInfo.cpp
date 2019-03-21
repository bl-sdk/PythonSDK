#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTraceNotifyInfo()
{
    py::class_< FTraceNotifyInfo >("FTraceNotifyInfo")
        .def_readwrite("ActorToNotify", &FTraceNotifyInfo::ActorToNotify)
        .def_readwrite("ActorCallingTrace", &FTraceNotifyInfo::ActorCallingTrace)
        .def_readwrite("ComponentHit", &FTraceNotifyInfo::ComponentHit)
        .def_readwrite("HitTime", &FTraceNotifyInfo::HitTime)
        .def_readwrite("HitLocation", &FTraceNotifyInfo::HitLocation)
        .def_readwrite("HitNormal", &FTraceNotifyInfo::HitNormal)
        .def_readwrite("End", &FTraceNotifyInfo::End)
        .def_readwrite("Start", &FTraceNotifyInfo::Start)
        .def_readwrite("Extent", &FTraceNotifyInfo::Extent)
        .def_readwrite("TraceFlags", &FTraceNotifyInfo::TraceFlags)
  ;
}