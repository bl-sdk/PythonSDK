#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpeedKillData(py::object m)
{
    py::class_< FSpeedKillData >(m, "FSpeedKillData")
        .def_readwrite("VictimName", &FSpeedKillData::VictimName)
        .def_readwrite("VictimKillTime", &FSpeedKillData::VictimKillTime)
  ;
}