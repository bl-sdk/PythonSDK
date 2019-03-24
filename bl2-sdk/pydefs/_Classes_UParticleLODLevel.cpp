#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleLODLevel(py::module &m)
{
    py::class_< UParticleLODLevel,  UObject   >(m, "UParticleLODLevel")
		.def_static("StaticClass", &UParticleLODLevel::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Level", &UParticleLODLevel::Level)
        .def_readwrite("RequiredModule", &UParticleLODLevel::RequiredModule)
        .def_readwrite("Modules", &UParticleLODLevel::Modules)
        .def_readwrite("TypeDataModule", &UParticleLODLevel::TypeDataModule)
        .def_readwrite("SpawnModule", &UParticleLODLevel::SpawnModule)
        .def_readwrite("EventGenerator", &UParticleLODLevel::EventGenerator)
        .def_readwrite("SpawningModules", &UParticleLODLevel::SpawningModules)
        .def_readwrite("SpawnModules", &UParticleLODLevel::SpawnModules)
        .def_readwrite("UpdateModules", &UParticleLODLevel::UpdateModules)
        .def_readwrite("OrbitModules", &UParticleLODLevel::OrbitModules)
        .def_readwrite("EventReceiverModules", &UParticleLODLevel::EventReceiverModules)
        .def_readwrite("PeakActiveParticles", &UParticleLODLevel::PeakActiveParticles)
          ;
}