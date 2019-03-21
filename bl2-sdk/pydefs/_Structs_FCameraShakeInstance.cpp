#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCameraShakeInstance()
{
    class_< FCameraShakeInstance >("FCameraShakeInstance", no_init)
        .def_readwrite("SourceShake", &FCameraShakeInstance::SourceShake)
        .def_readwrite("SourceShakeName", &FCameraShakeInstance::SourceShakeName)
        .def_readwrite("OscillatorTimeRemaining", &FCameraShakeInstance::OscillatorTimeRemaining)
        .def_readwrite("CurrentBlendInTime", &FCameraShakeInstance::CurrentBlendInTime)
        .def_readwrite("CurrentBlendOutTime", &FCameraShakeInstance::CurrentBlendOutTime)
        .def_readwrite("LocSinOffset", &FCameraShakeInstance::LocSinOffset)
        .def_readwrite("RotSinOffset", &FCameraShakeInstance::RotSinOffset)
        .def_readwrite("FOVSinOffset", &FCameraShakeInstance::FOVSinOffset)
        .def_readwrite("Scale", &FCameraShakeInstance::Scale)
        .def_readwrite("AnimInst", &FCameraShakeInstance::AnimInst)
        .def_readwrite("PlaySpace", &FCameraShakeInstance::PlaySpace)
        .def_readonly("UnknownData00", &FCameraShakeInstance::UnknownData00)
        .def_readwrite("UserPlaySpaceMatrix", &FCameraShakeInstance::UserPlaySpaceMatrix)
  ;
}