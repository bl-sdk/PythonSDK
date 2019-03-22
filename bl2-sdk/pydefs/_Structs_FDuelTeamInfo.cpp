#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDuelTeamInfo(py::module &m)
{
    py::class_< FDuelTeamInfo >(m, "FDuelTeamInfo")
        .def_readwrite("TeamAllegiance", &FDuelTeamInfo::TeamAllegiance)
        .def_readwrite("TeamColor", &FDuelTeamInfo::TeamColor)
  ;
}