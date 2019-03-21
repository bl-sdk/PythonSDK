#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionSetData()
{
    py::class_< FMissionSetData >("FMissionSetData")
        .def_readwrite("PackageName", &FMissionSetData::PackageName)
        .def_readwrite("Missions", &FMissionSetData::Missions)
  ;
}