#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimSlotInfo()
{
    class_< FAnimSlotInfo >("FAnimSlotInfo", no_init)
        .def_readwrite("SlotName", &FAnimSlotInfo::SlotName)
        .def_readwrite("ChannelWeights", &FAnimSlotInfo::ChannelWeights)
  ;
}