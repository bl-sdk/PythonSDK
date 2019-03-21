#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedAudioDefinition()
{
    class_< FCoordinatedAudioDefinition >("FCoordinatedAudioDefinition", no_init)
        .def_readwrite("TriggerEvent", &FCoordinatedAudioDefinition::TriggerEvent)
        .def_readwrite("TriggerTime", &FCoordinatedAudioDefinition::TriggerTime)
        .def_readwrite("RTPC", &FCoordinatedAudioDefinition::RTPC)
        .def_readwrite("RTPCOverTime", &FCoordinatedAudioDefinition::RTPCOverTime)
  ;
}