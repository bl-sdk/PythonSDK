#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionDirectiveData()
{
    py::class_< FReplicatedMissionDirectiveData >("FReplicatedMissionDirectiveData")
        .def_readwrite("MissionDirector", &FReplicatedMissionDirectiveData::MissionDirector)
        .def_readonly("UnknownData00", &FReplicatedMissionDirectiveData::UnknownData00)
        .def_readwrite("MissionDirective", &FReplicatedMissionDirectiveData::MissionDirective)
  ;
}