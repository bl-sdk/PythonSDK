#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDuelTeamInfo()
{
    py::class_< FDuelTeamInfo >("FDuelTeamInfo")
        .def_readwrite("TeamAllegiance", &FDuelTeamInfo::TeamAllegiance)
        .def_readwrite("TeamColor", &FDuelTeamInfo::TeamColor)
  ;
}