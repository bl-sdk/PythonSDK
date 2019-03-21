#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringModeSoundDefinition()
{
    class_< UFiringModeSoundDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFiringModeSoundDefinition", no_init)
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
        .def("StaticClass", &UFiringModeSoundDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}