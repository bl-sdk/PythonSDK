#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionStatusData(py::module &m)
{
    py::class_< FReplicatedMissionStatusData >(m, "FReplicatedMissionStatusData")
        .def_readwrite("Mission", &FReplicatedMissionStatusData::Mission)
        .def_readwrite("Status", &FReplicatedMissionStatusData::Status)
  ;
}