#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlinePlayerScore()
{
    class_< FOnlinePlayerScore >("FOnlinePlayerScore", no_init)
        .def_readwrite("PlayerID", &FOnlinePlayerScore::PlayerID)
        .def_readwrite("TeamID", &FOnlinePlayerScore::TeamID)
        .def_readwrite("Score", &FOnlinePlayerScore::Score)
  ;
}