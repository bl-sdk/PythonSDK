#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundEventMapping(py::object m)
{
    py::class_< FSoundEventMapping >(m, "FSoundEventMapping")
        .def_readwrite("SoundEventName", &FSoundEventMapping::SoundEventName)
        .def_readwrite("SoundToPlay", &FSoundEventMapping::SoundToPlay)
  ;
}