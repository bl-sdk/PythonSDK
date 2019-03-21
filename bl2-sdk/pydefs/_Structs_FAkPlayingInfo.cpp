#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAkPlayingInfo()
{
    py::class_< FAkPlayingInfo >("FAkPlayingInfo")
        .def_readwrite("SourceComponent", &FAkPlayingInfo::SourceComponent)
        .def_readwrite("AkPlayingId", &FAkPlayingInfo::AkPlayingId)
  ;
}