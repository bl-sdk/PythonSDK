#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimControlTrackKey()
{
    class_< FAnimControlTrackKey >("FAnimControlTrackKey", no_init)
        .def_readwrite("StartTime", &FAnimControlTrackKey::StartTime)
        .def_readwrite("AnimSeqName", &FAnimControlTrackKey::AnimSeqName)
        .def_readwrite("AnimStartOffset", &FAnimControlTrackKey::AnimStartOffset)
        .def_readwrite("AnimEndOffset", &FAnimControlTrackKey::AnimEndOffset)
        .def_readwrite("AnimPlayRate", &FAnimControlTrackKey::AnimPlayRate)
  ;
}