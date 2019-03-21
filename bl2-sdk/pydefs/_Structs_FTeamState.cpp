#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTeamState()
{
    class_< FTeamState >("FTeamState", no_init)
        .def_readwrite("TeamIndex", &FTeamState::TeamIndex)
        .def_readwrite("PlayerIndices", &FTeamState::PlayerIndices)
  ;
}