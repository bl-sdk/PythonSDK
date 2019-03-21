#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleSpriteEmitter()
{
    class_< UParticleSpriteEmitter, bases< UParticleEmitter >  , boost::noncopyable>("UParticleSpriteEmitter", no_init)
        .def("StaticClass", &UParticleSpriteEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}