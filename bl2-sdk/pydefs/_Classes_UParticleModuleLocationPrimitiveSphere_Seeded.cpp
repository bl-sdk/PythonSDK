#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveSphere_Seeded(py::module &m)
{
    py::class_< UParticleModuleLocationPrimitiveSphere_Seeded,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationPrimitiveSphere_Seeded")
		.def_static("StaticClass", &UParticleModuleLocationPrimitiveSphere_Seeded::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomSeedInfo", &UParticleModuleLocationPrimitiveSphere_Seeded::RandomSeedInfo)
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveSphere::StartRadius)
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
          ;
}