#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMeleeOverTimeState(py::object m)
{
    py::class_< FMeleeOverTimeState >(m, "FMeleeOverTimeState")
        .def_readwrite("MeleeDefinition", &FMeleeOverTimeState::MeleeDefinition)
        .def_readwrite("MeleeStartTime", &FMeleeOverTimeState::MeleeStartTime)
        .def_readwrite("TimeElapsedSinceLastMelee", &FMeleeOverTimeState::TimeElapsedSinceLastMelee)
        .def_readwrite("HitActors", &FMeleeOverTimeState::HitActors)
        .def_readwrite("MeleeStartLocation", &FMeleeOverTimeState::MeleeStartLocation)
        .def_readwrite("MeleeStartRotation", &FMeleeOverTimeState::MeleeStartRotation)
  ;
}