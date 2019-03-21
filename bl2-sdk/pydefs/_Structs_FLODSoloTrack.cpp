#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLODSoloTrack()
{
    py::class_< FLODSoloTrack >("FLODSoloTrack")
        .def_readwrite("SoloEnableSetting", &FLODSoloTrack::SoloEnableSetting)
  ;
}