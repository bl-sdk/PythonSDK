#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionDirectiveData(py::object m)
{
    py::class_< FReplicatedMissionDirectiveData >(m, "FReplicatedMissionDirectiveData")
        .def_readwrite("MissionDirector", &FReplicatedMissionDirectiveData::MissionDirector)
        .def_readwrite("MissionDirective", &FReplicatedMissionDirectiveData::MissionDirective)
  ;
}