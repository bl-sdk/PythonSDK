#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalSoundData(py::module &m)
{
    py::class_< FConditionalSoundData >(m, "FConditionalSoundData")
        .def_readwrite("Event", &FConditionalSoundData::Event)
        .def_readwrite("Cue", &FConditionalSoundData::Cue)
        .def_readwrite("Expressions", &FConditionalSoundData::Expressions)
  ;
}