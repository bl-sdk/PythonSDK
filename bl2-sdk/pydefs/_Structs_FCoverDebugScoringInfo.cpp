#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverDebugScoringInfo()
{
    class_< FCoverDebugScoringInfo >("FCoverDebugScoringInfo", no_init)
        .def_readwrite("PriorityName", &FCoverDebugScoringInfo::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringInfo::Score)
  ;
}