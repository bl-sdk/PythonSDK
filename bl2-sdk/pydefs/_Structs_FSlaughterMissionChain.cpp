#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSlaughterMissionChain()
{
    class_< FSlaughterMissionChain >("FSlaughterMissionChain", no_init)
        .def_readwrite("SlaughterMissions", &FSlaughterMissionChain::SlaughterMissions)
  ;
}