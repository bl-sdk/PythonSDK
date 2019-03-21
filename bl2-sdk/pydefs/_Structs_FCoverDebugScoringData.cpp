#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverDebugScoringData()
{
    class_< FCoverDebugScoringData >("FCoverDebugScoringData", no_init)
        .def_readwrite("PriorityName", &FCoverDebugScoringData::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringData::Score)
  ;
}