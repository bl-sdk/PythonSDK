#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimControlTrackKey()
{
    py::class_< FAnimControlTrackKey >("FAnimControlTrackKey")
        .def_readwrite("StartTime", &FAnimControlTrackKey::StartTime)
        .def_readwrite("AnimSeqName", &FAnimControlTrackKey::AnimSeqName)
        .def_readwrite("AnimStartOffset", &FAnimControlTrackKey::AnimStartOffset)
        .def_readwrite("AnimEndOffset", &FAnimControlTrackKey::AnimEndOffset)
        .def_readwrite("AnimPlayRate", &FAnimControlTrackKey::AnimPlayRate)
  ;
}