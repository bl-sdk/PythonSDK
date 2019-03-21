#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCovPosInfo()
{
    class_< FCovPosInfo >("FCovPosInfo", no_init)
        .def_readwrite("Link", &FCovPosInfo::Link)
        .def_readwrite("LtSlotIdx", &FCovPosInfo::LtSlotIdx)
        .def_readwrite("RtSlotIdx", &FCovPosInfo::RtSlotIdx)
        .def_readwrite("LtToRtPct", &FCovPosInfo::LtToRtPct)
        .def_readwrite("Location", &FCovPosInfo::Location)
        .def_readwrite("Normal", &FCovPosInfo::Normal)
        .def_readwrite("Tangent", &FCovPosInfo::Tangent)
  ;
}