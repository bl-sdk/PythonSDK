#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_PlayParticleEffect()
{
    class_< UAnimNotify_PlayParticleEffect, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_PlayParticleEffect", no_init)
        .def_readwrite("PSTemplate", &UAnimNotify_PlayParticleEffect::PSTemplate)
        .def_readwrite("PSNonExtremeContentTemplate", &UAnimNotify_PlayParticleEffect::PSNonExtremeContentTemplate)
        .def_readwrite("SocketName", &UAnimNotify_PlayParticleEffect::SocketName)
        .def_readwrite("BoneName", &UAnimNotify_PlayParticleEffect::BoneName)
        .def_readwrite("BoneSocketModuleActorName", &UAnimNotify_PlayParticleEffect::BoneSocketModuleActorName)
        .def("StaticClass", &UAnimNotify_PlayParticleEffect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}