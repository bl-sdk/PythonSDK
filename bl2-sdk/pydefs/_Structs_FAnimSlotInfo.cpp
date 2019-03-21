#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSlotInfo()
{
    py::class_< FAnimSlotInfo >("FAnimSlotInfo")
        .def_readwrite("SlotName", &FAnimSlotInfo::SlotName)
        .def_readwrite("ChannelWeights", &FAnimSlotInfo::ChannelWeights)
  ;
}