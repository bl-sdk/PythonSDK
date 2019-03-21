#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverKillParticles()
{
    py::class_< UParticleModuleEventReceiverKillParticles,  UParticleModuleEventReceiverBase   >("UParticleModuleEventReceiverKillParticles")
        .def("StaticClass", &UParticleModuleEventReceiverKillParticles::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}