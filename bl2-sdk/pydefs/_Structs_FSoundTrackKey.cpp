#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundTrackKey()
{
    class_< FSoundTrackKey >("FSoundTrackKey", no_init)
        .def_readwrite("Time", &FSoundTrackKey::Time)
        .def_readwrite("Volume", &FSoundTrackKey::Volume)
        .def_readwrite("Pitch", &FSoundTrackKey::Pitch)
        .def_readwrite("Sound", &FSoundTrackKey::Sound)
  ;
}