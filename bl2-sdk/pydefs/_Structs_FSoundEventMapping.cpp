#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundEventMapping()
{
    py::class_< FSoundEventMapping >("FSoundEventMapping")
        .def_readwrite("SoundEventName", &FSoundEventMapping::SoundEventName)
        .def_readwrite("SoundToPlay", &FSoundEventMapping::SoundToPlay)
  ;
}