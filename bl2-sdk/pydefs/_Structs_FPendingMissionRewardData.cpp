#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingMissionRewardData(py::module &m)
{
    py::class_< FPendingMissionRewardData >(m, "FPendingMissionRewardData")
        .def_readwrite("Mission", &FPendingMissionRewardData::Mission)
  ;
}