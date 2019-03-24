#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleLightEnvironmentComponent(py::module &m)
{
    py::class_< UParticleLightEnvironmentComponent,  UDynamicLightEnvironmentComponent   >(m, "UParticleLightEnvironmentComponent")
		.def_static("StaticClass", &UParticleLightEnvironmentComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ReferenceCount", &UParticleLightEnvironmentComponent::ReferenceCount)
        .def_readwrite("NumPooledReuses", &UParticleLightEnvironmentComponent::NumPooledReuses)
        .def_readwrite("SharedInstigator", &UParticleLightEnvironmentComponent::SharedInstigator)
        .def_readwrite("SharedParticleSystem", &UParticleLightEnvironmentComponent::SharedParticleSystem)
          ;
}