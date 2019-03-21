#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEffectCollectionDefinition()
{
    class_< UEffectCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UEffectCollectionDefinition", no_init)
        .def_readwrite("ParticleEffects", &UEffectCollectionDefinition::ParticleEffects)
        .def("StaticClass", &UEffectCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetParticleEffect", &UEffectCollectionDefinition::GetParticleEffect, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}