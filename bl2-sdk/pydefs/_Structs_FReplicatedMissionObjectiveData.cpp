#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionObjectiveData()
{
    py::class_< FReplicatedMissionObjectiveData >("FReplicatedMissionObjectiveData")
        .def_readwrite("Objective", &FReplicatedMissionObjectiveData::Objective)
        .def_readwrite("ObjectiveBit", &FReplicatedMissionObjectiveData::ObjectiveBit)
  ;
}