#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeltaTrackInfo()
{
    class_< FDeltaTrackInfo >("FDeltaTrackInfo", no_init)
        .def_readonly("RotKey", &FDeltaTrackInfo::RotKey)
        .def_readonly("PosKey", &FDeltaTrackInfo::PosKey)
        .def_readonly("RotKeyIndex", &FDeltaTrackInfo::RotKeyIndex)
        .def_readonly("PosKeyIndex", &FDeltaTrackInfo::PosKeyIndex)
  ;
}