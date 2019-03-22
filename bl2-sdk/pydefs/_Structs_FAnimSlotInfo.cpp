#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSlotInfo(py::module &m)
{
    py::class_< FAnimSlotInfo >(m, "FAnimSlotInfo")
        .def_readwrite("SlotName", &FAnimSlotInfo::SlotName)
        .def_readwrite("ChannelWeights", &FAnimSlotInfo::ChannelWeights)
  ;
}