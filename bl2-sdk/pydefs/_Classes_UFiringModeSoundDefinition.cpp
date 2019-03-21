#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFiringModeSoundDefinition(py::object m)
{
    py::class_< UFiringModeSoundDefinition,  UGBXDefinition   >(m, "UFiringModeSoundDefinition")
        .def_readwrite("FireSounds", &UFiringModeSoundDefinition::FireSounds)
        .def_readwrite("FireTailSounds", &UFiringModeSoundDefinition::FireTailSounds)
        .def_readwrite("ShellCasingImpact", &UFiringModeSoundDefinition::ShellCasingImpact)
        .def_readwrite("ShellCasingDelay", &UFiringModeSoundDefinition::ShellCasingDelay)
        .def_readwrite("TravelingSoundEvent", &UFiringModeSoundDefinition::TravelingSoundEvent)
        .def_readwrite("BulletWhipSounds", &UFiringModeSoundDefinition::BulletWhipSounds)
        .def_readwrite("BulletWhipRadius", &UFiringModeSoundDefinition::BulletWhipRadius)
        .def_readwrite("BeamSoundEvent", &UFiringModeSoundDefinition::BeamSoundEvent)
        .def_readwrite("BeamStopSoundEvent", &UFiringModeSoundDefinition::BeamStopSoundEvent)
        .def_readwrite("BeamImpactSoundEvent", &UFiringModeSoundDefinition::BeamImpactSoundEvent)
        .def("StaticClass", &UFiringModeSoundDefinition::StaticClass, py::return_value_policy::reference)
          ;
}