#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcLevelTravelPair()
{
    py::class_< FDlcLevelTravelPair >("FDlcLevelTravelPair")
        .def_readwrite("NonDlcStationDef", &FDlcLevelTravelPair::NonDlcStationDef)
        .def_readwrite("DlcStationDef", &FDlcLevelTravelPair::DlcStationDef)
  ;
}