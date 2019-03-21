#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingSubtitleInfo()
{
    class_< FPendingSubtitleInfo >("FPendingSubtitleInfo", no_init)
        .def_readwrite("PendingSubtitlePlayingInfoPtr", &FPendingSubtitleInfo::PendingSubtitlePlayingInfoPtr)
        .def_readwrite("OriginalFileName", &FPendingSubtitleInfo::OriginalFileName)
        .def_readwrite("StreamedSubtitleData", &FPendingSubtitleInfo::StreamedSubtitleData)
  ;
}