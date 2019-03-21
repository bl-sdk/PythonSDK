#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTeamInformation(py::object m)
{
    py::class_< FTeamInformation >(m, "FTeamInformation")
        .def_readwrite("TeamIndex", &FTeamInformation::TeamIndex)
        .def_readwrite("TeamName", &FTeamInformation::TeamName)
        .def_readwrite("TeamColor", &FTeamInformation::TeamColor)
        .def_readwrite("MaxSize", &FTeamInformation::MaxSize)
  ;
}