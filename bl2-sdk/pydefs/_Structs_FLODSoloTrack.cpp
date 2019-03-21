#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLODSoloTrack(py::object m)
{
    py::class_< FLODSoloTrack >(m, "FLODSoloTrack")
        .def_readwrite("SoloEnableSetting", &FLODSoloTrack::SoloEnableSetting)
  ;
}