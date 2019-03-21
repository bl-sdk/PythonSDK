#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverReplicationInfo()
{
    class_< FCoverReplicationInfo >("FCoverReplicationInfo", no_init)
        .def_readwrite("Link", &FCoverReplicationInfo::Link)
        .def_readwrite("SlotsEnabled", &FCoverReplicationInfo::SlotsEnabled)
        .def_readwrite("SlotsDisabled", &FCoverReplicationInfo::SlotsDisabled)
        .def_readwrite("SlotsAdjusted", &FCoverReplicationInfo::SlotsAdjusted)
        .def_readwrite("SlotsCoverTypeChanged", &FCoverReplicationInfo::SlotsCoverTypeChanged)
  ;
}