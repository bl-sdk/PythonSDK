#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpeedKillData()
{
    class_< FSpeedKillData >("FSpeedKillData", no_init)
        .def_readwrite("VictimName", &FSpeedKillData::VictimName)
        .def_readwrite("VictimKillTime", &FSpeedKillData::VictimKillTime)
  ;
}