#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSupportedSubTrackInfo()
{
    py::class_< FSupportedSubTrackInfo >("FSupportedSubTrackInfo")
        .def_readwrite("SupportedClass", &FSupportedSubTrackInfo::SupportedClass)
        .def_readwrite("SubTrackName", &FSupportedSubTrackInfo::SubTrackName)
        .def_readwrite("GroupIndex", &FSupportedSubTrackInfo::GroupIndex)
  ;
}