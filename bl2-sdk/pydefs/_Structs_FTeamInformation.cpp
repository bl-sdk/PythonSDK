#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTeamInformation()
{
    py::class_< FTeamInformation >("FTeamInformation")
        .def_readwrite("TeamIndex", &FTeamInformation::TeamIndex)
        .def_readwrite("TeamName", &FTeamInformation::TeamName)
        .def_readwrite("TeamColor", &FTeamInformation::TeamColor)
        .def_readwrite("MaxSize", &FTeamInformation::MaxSize)
  ;
}