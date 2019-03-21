#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFaceFXTrackKey(py::object m)
{
    py::class_< FFaceFXTrackKey >(m, "FFaceFXTrackKey")
        .def_readwrite("StartTime", &FFaceFXTrackKey::StartTime)
        .def_readwrite("FaceFXGroupName", &FFaceFXTrackKey::FaceFXGroupName)
        .def_readwrite("FaceFXSeqName", &FFaceFXTrackKey::FaceFXSeqName)
  ;
}