#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionRewardData()
{
    py::class_< FMissionRewardData >("FMissionRewardData")
        .def_readwrite("MissionDef", &FMissionRewardData::MissionDef)
  ;
}