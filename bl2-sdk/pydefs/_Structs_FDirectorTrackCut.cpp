#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDirectorTrackCut()
{
    class_< FDirectorTrackCut >("FDirectorTrackCut", no_init)
        .def_readwrite("Time", &FDirectorTrackCut::Time)
        .def_readwrite("TransitionTime", &FDirectorTrackCut::TransitionTime)
        .def_readwrite("TargetCamGroup", &FDirectorTrackCut::TargetCamGroup)
  ;
}