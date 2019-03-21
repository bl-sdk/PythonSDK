#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTeamInformation()
{
    class_< FTeamInformation >("FTeamInformation", no_init)
        .def_readwrite("TeamIndex", &FTeamInformation::TeamIndex)
        .def_readwrite("TeamName", &FTeamInformation::TeamName)
        .def_readwrite("TeamColor", &FTeamInformation::TeamColor)
        .def_readwrite("MaxSize", &FTeamInformation::MaxSize)
  ;
}