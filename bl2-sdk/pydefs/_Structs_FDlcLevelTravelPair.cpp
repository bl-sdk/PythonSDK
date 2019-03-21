#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDlcLevelTravelPair()
{
    class_< FDlcLevelTravelPair >("FDlcLevelTravelPair", no_init)
        .def_readwrite("NonDlcStationDef", &FDlcLevelTravelPair::NonDlcStationDef)
        .def_readwrite("DlcStationDef", &FDlcLevelTravelPair::DlcStationDef)
  ;
}