#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingSubtitleInfo(py::module &m)
{
    py::class_< FPendingSubtitleInfo >(m, "FPendingSubtitleInfo")
        .def_readwrite("PendingSubtitlePlayingInfoPtr", &FPendingSubtitleInfo::PendingSubtitlePlayingInfoPtr)
        .def_readwrite("OriginalFileName", &FPendingSubtitleInfo::OriginalFileName)
        .def_readwrite("StreamedSubtitleData", &FPendingSubtitleInfo::StreamedSubtitleData)
  ;
}