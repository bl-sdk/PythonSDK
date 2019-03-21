#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSuspensionSound()
{
    class_< FSuspensionSound >("FSuspensionSound", no_init)
        .def_readwrite("LastSuspensionTravel", &FSuspensionSound::LastSuspensionTravel)
        .def_readwrite("LastPlayTime", &FSuspensionSound::LastPlayTime)
        .def_readwrite("PlayingInfo", &FSuspensionSound::PlayingInfo)
  ;
}