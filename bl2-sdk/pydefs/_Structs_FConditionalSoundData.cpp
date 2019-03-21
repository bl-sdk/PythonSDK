#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalSoundData()
{
    class_< FConditionalSoundData >("FConditionalSoundData", no_init)
        .def_readwrite("Event", &FConditionalSoundData::Event)
        .def_readwrite("Cue", &FConditionalSoundData::Cue)
        .def_readwrite("Expressions", &FConditionalSoundData::Expressions)
  ;
}