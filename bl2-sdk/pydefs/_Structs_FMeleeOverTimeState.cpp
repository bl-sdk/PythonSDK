#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMeleeOverTimeState()
{
    class_< FMeleeOverTimeState >("FMeleeOverTimeState", no_init)
        .def_readwrite("MeleeDefinition", &FMeleeOverTimeState::MeleeDefinition)
        .def_readwrite("MeleeStartTime", &FMeleeOverTimeState::MeleeStartTime)
        .def_readwrite("TimeElapsedSinceLastMelee", &FMeleeOverTimeState::TimeElapsedSinceLastMelee)
        .def_readwrite("HitActors", &FMeleeOverTimeState::HitActors)
        .def_readwrite("MeleeStartLocation", &FMeleeOverTimeState::MeleeStartLocation)
        .def_readwrite("MeleeStartRotation", &FMeleeOverTimeState::MeleeStartRotation)
  ;
}