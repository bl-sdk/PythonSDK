#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleLightEnvironmentComponent()
{
    py::class_< UParticleLightEnvironmentComponent,  UDynamicLightEnvironmentComponent   >("UParticleLightEnvironmentComponent")
        .def_readwrite("ReferenceCount", &UParticleLightEnvironmentComponent::ReferenceCount)
        .def_readwrite("NumPooledReuses", &UParticleLightEnvironmentComponent::NumPooledReuses)
        .def_readwrite("SharedInstigator", &UParticleLightEnvironmentComponent::SharedInstigator)
        .def_readwrite("SharedParticleSystem", &UParticleLightEnvironmentComponent::SharedParticleSystem)
        .def("StaticClass", &UParticleLightEnvironmentComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}