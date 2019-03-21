#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverSpotInfo()
{
    class_< FCoverSpotInfo >("FCoverSpotInfo", no_init)
        .def_readwrite("TheCoverActor", &FCoverSpotInfo::TheCoverActor)
        .def_readwrite("CoverSlotIndex", &FCoverSpotInfo::CoverSlotIndex)
        .def_readwrite("CoverSpotWorldLocation", &FCoverSpotInfo::CoverSpotWorldLocation)
        .def_readwrite("CoverHeight", &FCoverSpotInfo::CoverHeight)
        .def_readwrite("ExtendedInfo1", &FCoverSpotInfo::ExtendedInfo1)
        .def_readwrite("ExtendedInfo2", &FCoverSpotInfo::ExtendedInfo2)
        .def_readwrite("ExtendedInfo3", &FCoverSpotInfo::ExtendedInfo3)
  ;
}