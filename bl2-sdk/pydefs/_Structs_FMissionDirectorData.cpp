#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionDirectorData(py::module &m)
{
    py::class_< FMissionDirectorData >(m, "FMissionDirectorData")
        .def_readwrite("MissionDefinition", &FMissionDirectorData::MissionDefinition)
        .def_readwrite("BranchEnding", &FMissionDirectorData::BranchEnding)
  ;
}