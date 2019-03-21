#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpeedKillData()
{
    py::class_< FSpeedKillData >("FSpeedKillData")
        .def_readwrite("VictimName", &FSpeedKillData::VictimName)
        .def_readwrite("VictimKillTime", &FSpeedKillData::VictimKillTime)
  ;
}