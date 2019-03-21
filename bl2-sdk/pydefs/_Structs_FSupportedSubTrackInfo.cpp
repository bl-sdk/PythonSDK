#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSupportedSubTrackInfo(py::object m)
{
    py::class_< FSupportedSubTrackInfo >(m, "FSupportedSubTrackInfo")
        .def_readwrite("SupportedClass", &FSupportedSubTrackInfo::SupportedClass)
        .def_readwrite("SubTrackName", &FSupportedSubTrackInfo::SubTrackName)
        .def_readwrite("GroupIndex", &FSupportedSubTrackInfo::GroupIndex)
  ;
}