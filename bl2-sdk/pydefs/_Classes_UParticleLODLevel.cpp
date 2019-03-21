#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleLODLevel()
{
    class_< UParticleLODLevel, bases< UObject >  , boost::noncopyable>("UParticleLODLevel", no_init)
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
        .def("StaticClass", &UParticleLODLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}