#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionFilterData()
{
    py::class_< FReplicatedMissionFilterData >("FReplicatedMissionFilterData")
        .def_readwrite("Mission", &FReplicatedMissionFilterData::Mission)
  ;
}