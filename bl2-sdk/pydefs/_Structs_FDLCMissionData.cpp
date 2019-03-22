#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDLCMissionData(py::module &m)
{
    py::class_< FDLCMissionData >(m, "FDLCMissionData")
        .def_readwrite("MinMissionNumber", &FDLCMissionData::MinMissionNumber)
        .def_readwrite("MaxMissionNumber", &FDLCMissionData::MaxMissionNumber)
        .def_readwrite("MissionNameLocKey", &FDLCMissionData::MissionNameLocKey)
  ;
}