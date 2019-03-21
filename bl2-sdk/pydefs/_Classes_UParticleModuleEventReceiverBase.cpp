#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverBase()
{
    class_< UParticleModuleEventReceiverBase, bases< UParticleModuleEventBase >  , boost::noncopyable>("UParticleModuleEventReceiverBase", no_init)
        .def_readwrite("EventGeneratorType", &UParticleModuleEventReceiverBase::EventGeneratorType)
        .def_readwrite("EventName", &UParticleModuleEventReceiverBase::EventName)
        .def("StaticClass", &UParticleModuleEventReceiverBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}