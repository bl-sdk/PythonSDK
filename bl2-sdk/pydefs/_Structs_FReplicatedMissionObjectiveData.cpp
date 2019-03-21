#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionObjectiveData(py::object m)
{
    py::class_< FReplicatedMissionObjectiveData >(m, "FReplicatedMissionObjectiveData")
        .def_readwrite("Objective", &FReplicatedMissionObjectiveData::Objective)
        .def_readwrite("ObjectiveBit", &FReplicatedMissionObjectiveData::ObjectiveBit)
  ;
}