#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDuelTeamInfo()
{
    class_< FDuelTeamInfo >("FDuelTeamInfo", no_init)
        .def_readwrite("TeamAllegiance", &FDuelTeamInfo::TeamAllegiance)
        .def_readwrite("TeamColor", &FDuelTeamInfo::TeamColor)
  ;
}