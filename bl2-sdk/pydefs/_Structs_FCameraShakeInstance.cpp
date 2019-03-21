#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCameraShakeInstance(py::object m)
{
    py::class_< FCameraShakeInstance >(m, "FCameraShakeInstance")
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
        .def_readwrite("UserPlaySpaceMatrix", &FCameraShakeInstance::UserPlaySpaceMatrix)
  ;
}