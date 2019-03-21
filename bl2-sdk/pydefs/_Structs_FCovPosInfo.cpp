#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCovPosInfo()
{
    py::class_< FCovPosInfo >("FCovPosInfo")
        .def_readwrite("Link", &FCovPosInfo::Link)
        .def_readwrite("LtSlotIdx", &FCovPosInfo::LtSlotIdx)
        .def_readwrite("RtSlotIdx", &FCovPosInfo::RtSlotIdx)
        .def_readwrite("LtToRtPct", &FCovPosInfo::LtToRtPct)
        .def_readwrite("Location", &FCovPosInfo::Location)
        .def_readwrite("Normal", &FCovPosInfo::Normal)
        .def_readwrite("Tangent", &FCovPosInfo::Tangent)
  ;
}