#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AParticleEventManager()
{
    class_< AParticleEventManager, bases< AActor >  , boost::noncopyable>("AParticleEventManager", no_init)
        .def("StaticClass", &AParticleEventManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventHandleParticleModuleEventSendToGame", &AParticleEventManager::eventHandleParticleModuleEventSendToGame)
        .staticmethod("StaticClass")
  ;
}