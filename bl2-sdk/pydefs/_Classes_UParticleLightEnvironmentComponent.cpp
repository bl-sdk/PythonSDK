#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleLightEnvironmentComponent()
{
    class_< UParticleLightEnvironmentComponent, bases< UDynamicLightEnvironmentComponent >  , boost::noncopyable>("UParticleLightEnvironmentComponent", no_init)
        .def_readwrite("ReferenceCount", &UParticleLightEnvironmentComponent::ReferenceCount)
        .def_readwrite("NumPooledReuses", &UParticleLightEnvironmentComponent::NumPooledReuses)
        .def_readwrite("SharedInstigator", &UParticleLightEnvironmentComponent::SharedInstigator)
        .def_readwrite("SharedParticleSystem", &UParticleLightEnvironmentComponent::SharedParticleSystem)
        .def("StaticClass", &UParticleLightEnvironmentComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}