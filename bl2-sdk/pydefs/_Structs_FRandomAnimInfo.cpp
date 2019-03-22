#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRandomAnimInfo(py::module &m)
{
    py::class_< FRandomAnimInfo >(m, "FRandomAnimInfo")
        .def_readwrite("Chance", &FRandomAnimInfo::Chance)
        .def_readwrite("LoopCountMin", &FRandomAnimInfo::LoopCountMin)
        .def_readwrite("LoopCountMax", &FRandomAnimInfo::LoopCountMax)
        .def_readwrite("BlendInTime", &FRandomAnimInfo::BlendInTime)
        .def_readwrite("PlayRateRange", &FRandomAnimInfo::PlayRateRange)
        .def_readwrite("LoopCount", &FRandomAnimInfo::LoopCount)
        .def_readwrite("LastPosition", &FRandomAnimInfo::LastPosition)
  ;
}