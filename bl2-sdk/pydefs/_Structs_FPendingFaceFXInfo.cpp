#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingFaceFXInfo(py::object m)
{
    py::class_< FPendingFaceFXInfo >(m, "FPendingFaceFXInfo")
        .def_readwrite("PendingFaceFXPlayingInfoPtr", &FPendingFaceFXInfo::PendingFaceFXPlayingInfoPtr)
        .def_readwrite("AnimName", &FPendingFaceFXInfo::AnimName)
        .def_readwrite("RawData", &FPendingFaceFXInfo::RawData)
  ;
}