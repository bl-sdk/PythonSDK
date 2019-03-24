#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSpawnPerUnit(py::module &m)
{
    py::class_< UParticleModuleSpawnPerUnit,  UParticleModuleSpawnBase   >(m, "UParticleModuleSpawnPerUnit")
		.def_static("StaticClass", &UParticleModuleSpawnPerUnit::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UnitScalar", &UParticleModuleSpawnPerUnit::UnitScalar)
        .def_readwrite("SpawnPerUnit", &UParticleModuleSpawnPerUnit::SpawnPerUnit)
        .def_readwrite("MovementTolerance", &UParticleModuleSpawnPerUnit::MovementTolerance)
        .def_readwrite("MaxFrameDistance", &UParticleModuleSpawnPerUnit::MaxFrameDistance)
          ;
}