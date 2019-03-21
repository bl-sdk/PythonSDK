#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverKillParticles(py::object m)
{
    py::class_< UParticleModuleEventReceiverKillParticles,  UParticleModuleEventReceiverBase   >(m, "UParticleModuleEventReceiverKillParticles")
        .def("StaticClass", &UParticleModuleEventReceiverKillParticles::StaticClass, py::return_value_policy::reference)
          ;
}