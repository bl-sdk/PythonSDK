#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEmitterSpawnable(py::module &m)
{
    py::class_< AEmitterSpawnable,  AEmitter   >(m, "AEmitterSpawnable")
        .def_readwrite("ParticleTemplate", &AEmitterSpawnable::ParticleTemplate)
        .def("StaticClass", &AEmitterSpawnable::StaticClass, py::return_value_policy::reference)
        .def("eventReplicatedEvent", &AEmitterSpawnable::eventReplicatedEvent)
        .def("eventSetTemplate", &AEmitterSpawnable::eventSetTemplate)
          ;
}