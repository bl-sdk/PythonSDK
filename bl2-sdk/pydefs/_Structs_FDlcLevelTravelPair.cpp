#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcLevelTravelPair(py::object m)
{
    py::class_< FDlcLevelTravelPair >(m, "FDlcLevelTravelPair")
        .def_readwrite("NonDlcStationDef", &FDlcLevelTravelPair::NonDlcStationDef)
        .def_readwrite("DlcStationDef", &FDlcLevelTravelPair::DlcStationDef)
  ;
}