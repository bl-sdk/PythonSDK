#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_PlayParticleEffect(py::module &m)
{
    py::class_< UAnimNotify_PlayParticleEffect,  UAnimNotify   >(m, "UAnimNotify_PlayParticleEffect")
        .def_readwrite("PSTemplate", &UAnimNotify_PlayParticleEffect::PSTemplate)
        .def_readwrite("PSNonExtremeContentTemplate", &UAnimNotify_PlayParticleEffect::PSNonExtremeContentTemplate)
        .def_readwrite("SocketName", &UAnimNotify_PlayParticleEffect::SocketName)
        .def_readwrite("BoneName", &UAnimNotify_PlayParticleEffect::BoneName)
        .def_readwrite("BoneSocketModuleActorName", &UAnimNotify_PlayParticleEffect::BoneSocketModuleActorName)
        .def("StaticClass", &UAnimNotify_PlayParticleEffect::StaticClass, py::return_value_policy::reference)
          ;
}