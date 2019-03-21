#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverKillParticles()
{
    class_< UParticleModuleEventReceiverKillParticles, bases< UParticleModuleEventReceiverBase >  , boost::noncopyable>("UParticleModuleEventReceiverKillParticles", no_init)
        .def("StaticClass", &UParticleModuleEventReceiverKillParticles::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}