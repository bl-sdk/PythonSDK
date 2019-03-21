#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRandomAnimInfo()
{
    class_< FRandomAnimInfo >("FRandomAnimInfo", no_init)
        .def_readwrite("Chance", &FRandomAnimInfo::Chance)
        .def_readwrite("LoopCountMin", &FRandomAnimInfo::LoopCountMin)
        .def_readwrite("LoopCountMax", &FRandomAnimInfo::LoopCountMax)
        .def_readwrite("BlendInTime", &FRandomAnimInfo::BlendInTime)
        .def_readwrite("PlayRateRange", &FRandomAnimInfo::PlayRateRange)
        .def_readwrite("LoopCount", &FRandomAnimInfo::LoopCount)
        .def_readwrite("LastPosition", &FRandomAnimInfo::LastPosition)
  ;
}