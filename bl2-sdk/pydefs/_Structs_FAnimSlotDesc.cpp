#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSlotDesc(py::object m)
{
    py::class_< FAnimSlotDesc >(m, "FAnimSlotDesc")
        .def_readwrite("SlotName", &FAnimSlotDesc::SlotName)
        .def_readwrite("NumChannels", &FAnimSlotDesc::NumChannels)
  ;
}