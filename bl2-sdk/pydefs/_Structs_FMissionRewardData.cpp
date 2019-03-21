#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionRewardData(py::object m)
{
    py::class_< FMissionRewardData >(m, "FMissionRewardData")
        .def_readwrite("MissionDef", &FMissionRewardData::MissionDef)
  ;
}