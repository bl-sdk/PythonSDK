#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverReplicationInfo(py::object m)
{
    py::class_< FCoverReplicationInfo >(m, "FCoverReplicationInfo")
        .def_readwrite("Link", &FCoverReplicationInfo::Link)
        .def_readwrite("SlotsEnabled", &FCoverReplicationInfo::SlotsEnabled)
        .def_readwrite("SlotsDisabled", &FCoverReplicationInfo::SlotsDisabled)
        .def_readwrite("SlotsAdjusted", &FCoverReplicationInfo::SlotsAdjusted)
        .def_readwrite("SlotsCoverTypeChanged", &FCoverReplicationInfo::SlotsCoverTypeChanged)
  ;
}