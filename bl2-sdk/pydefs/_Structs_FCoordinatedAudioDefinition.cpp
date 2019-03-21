#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedAudioDefinition()
{
    py::class_< FCoordinatedAudioDefinition >("FCoordinatedAudioDefinition")
        .def_readwrite("TriggerEvent", &FCoordinatedAudioDefinition::TriggerEvent)
        .def_readwrite("TriggerTime", &FCoordinatedAudioDefinition::TriggerTime)
        .def_readwrite("RTPC", &FCoordinatedAudioDefinition::RTPC)
        .def_readwrite("RTPCOverTime", &FCoordinatedAudioDefinition::RTPCOverTime)
  ;
}