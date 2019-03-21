#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeltaTrackInfo()
{
    py::class_< FDeltaTrackInfo >("FDeltaTrackInfo")
        .def_readonly("RotKey", &FDeltaTrackInfo::RotKey)
        .def_readonly("PosKey", &FDeltaTrackInfo::PosKey)
        .def_readonly("RotKeyIndex", &FDeltaTrackInfo::RotKeyIndex)
        .def_readonly("PosKeyIndex", &FDeltaTrackInfo::PosKeyIndex)
  ;
}