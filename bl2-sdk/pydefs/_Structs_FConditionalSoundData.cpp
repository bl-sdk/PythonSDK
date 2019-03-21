#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalSoundData()
{
    py::class_< FConditionalSoundData >("FConditionalSoundData")
        .def_readwrite("Event", &FConditionalSoundData::Event)
        .def_readwrite("Cue", &FConditionalSoundData::Cue)
        .def_readwrite("Expressions", &FConditionalSoundData::Expressions)
  ;
}