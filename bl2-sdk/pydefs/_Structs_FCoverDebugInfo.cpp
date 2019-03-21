#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverDebugInfo()
{
    class_< FCoverDebugInfo >("FCoverDebugInfo", no_init)
        .def_readwrite("CoverRegionName", &FCoverDebugInfo::CoverRegionName)
        .def_readwrite("Score", &FCoverDebugInfo::Score)
        .def_readwrite("Distance", &FCoverDebugInfo::Distance)
        .def_readwrite("FailString", &FCoverDebugInfo::FailString)
        .def_readwrite("LeftEndPoint", &FCoverDebugInfo::LeftEndPoint)
        .def_readwrite("RightEndPoint", &FCoverDebugInfo::RightEndPoint)
        .def_readwrite("CoverDirection", &FCoverDebugInfo::CoverDirection)
        .def_readwrite("ScoringInfo", &FCoverDebugInfo::ScoringInfo)
  ;
}