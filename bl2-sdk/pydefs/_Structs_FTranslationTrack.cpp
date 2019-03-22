#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTranslationTrack(py::module &m)
{
    py::class_< FTranslationTrack >(m, "FTranslationTrack")
        .def_readwrite("PosKeys", &FTranslationTrack::PosKeys)
        .def_readwrite("Times", &FTranslationTrack::Times)
  ;
}