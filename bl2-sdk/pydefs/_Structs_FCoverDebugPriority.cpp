#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverDebugPriority(py::object m)
{
    py::class_< FCoverDebugPriority >(m, "FCoverDebugPriority")
        .def_readwrite("Score", &FCoverDebugPriority::Score)
        .def_readwrite("Distance", &FCoverDebugPriority::Distance)
        .def_readwrite("TheCoverActor", &FCoverDebugPriority::TheCoverActor)
        .def_readwrite("SlotNdx", &FCoverDebugPriority::SlotNdx)
        .def_readwrite("FailString", &FCoverDebugPriority::FailString)
        .def_readwrite("ScoringInfo", &FCoverDebugPriority::ScoringInfo)
  ;
}