#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDirectorTrackCut()
{
    py::class_< FDirectorTrackCut >("FDirectorTrackCut")
        .def_readwrite("Time", &FDirectorTrackCut::Time)
        .def_readwrite("TransitionTime", &FDirectorTrackCut::TransitionTime)
        .def_readwrite("TargetCamGroup", &FDirectorTrackCut::TargetCamGroup)
  ;
}