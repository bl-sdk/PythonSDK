#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLeaderboardHandle()
{
    class_< FLeaderboardHandle >("FLeaderboardHandle", no_init)
        .def_readwrite("Dud", &FLeaderboardHandle::Dud)
  ;
}