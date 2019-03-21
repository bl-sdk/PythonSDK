#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawnPerUnit()
{
    class_< UParticleModuleSpawnPerUnit, bases< UParticleModuleSpawnBase >  , boost::noncopyable>("UParticleModuleSpawnPerUnit", no_init)
        .def_readwrite("UnitScalar", &UParticleModuleSpawnPerUnit::UnitScalar)
        .def_readwrite("SpawnPerUnit", &UParticleModuleSpawnPerUnit::SpawnPerUnit)
        .def_readwrite("MovementTolerance", &UParticleModuleSpawnPerUnit::MovementTolerance)
        .def_readwrite("MaxFrameDistance", &UParticleModuleSpawnPerUnit::MaxFrameDistance)
        .def("StaticClass", &UParticleModuleSpawnPerUnit::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}