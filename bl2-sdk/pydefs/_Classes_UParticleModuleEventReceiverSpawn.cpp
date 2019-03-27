#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventReceiverSpawn(py::module &m)
{
    py::class_< UParticleModuleEventReceiverSpawn,  UParticleModuleEventReceiverBase   >(m, "UParticleModuleEventReceiverSpawn")
		.def_static("StaticClass", &UParticleModuleEventReceiverSpawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpawnCount", &UParticleModuleEventReceiverSpawn::SpawnCount)
        .def_readwrite("InheritVelocityScale", &UParticleModuleEventReceiverSpawn::InheritVelocityScale)
          ;
}