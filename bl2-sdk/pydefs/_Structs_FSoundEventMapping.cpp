#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundEventMapping()
{
    class_< FSoundEventMapping >("FSoundEventMapping", no_init)
        .def_readwrite("SoundEventName", &FSoundEventMapping::SoundEventName)
        .def_readwrite("SoundToPlay", &FSoundEventMapping::SoundToPlay)
  ;
}