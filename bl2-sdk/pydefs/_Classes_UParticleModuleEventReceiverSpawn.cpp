#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverSpawn(py::object m)
{
    py::class_< UParticleModuleEventReceiverSpawn,  UParticleModuleEventReceiverBase   >(m, "UParticleModuleEventReceiverSpawn")
        .def_readwrite("SpawnCount", &UParticleModuleEventReceiverSpawn::SpawnCount)
        .def_readwrite("InheritVelocityScale", &UParticleModuleEventReceiverSpawn::InheritVelocityScale)
        .def("StaticClass", &UParticleModuleEventReceiverSpawn::StaticClass, py::return_value_policy::reference)
          ;
}