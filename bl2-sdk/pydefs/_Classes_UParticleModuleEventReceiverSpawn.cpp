#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverSpawn()
{
    class_< UParticleModuleEventReceiverSpawn, bases< UParticleModuleEventReceiverBase >  , boost::noncopyable>("UParticleModuleEventReceiverSpawn", no_init)
        .def_readwrite("SpawnCount", &UParticleModuleEventReceiverSpawn::SpawnCount)
        .def_readwrite("InheritVelocityScale", &UParticleModuleEventReceiverSpawn::InheritVelocityScale)
        .def("StaticClass", &UParticleModuleEventReceiverSpawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}