#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawnPerUnit()
{
    py::class_< UParticleModuleSpawnPerUnit,  UParticleModuleSpawnBase   >("UParticleModuleSpawnPerUnit")
        .def_readwrite("UnitScalar", &UParticleModuleSpawnPerUnit::UnitScalar)
        .def_readwrite("SpawnPerUnit", &UParticleModuleSpawnPerUnit::SpawnPerUnit)
        .def_readwrite("MovementTolerance", &UParticleModuleSpawnPerUnit::MovementTolerance)
        .def_readwrite("MaxFrameDistance", &UParticleModuleSpawnPerUnit::MaxFrameDistance)
        .def("StaticClass", &UParticleModuleSpawnPerUnit::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}