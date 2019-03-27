#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveBase(py::module &m)
{
    py::class_< UParticleModuleLocationPrimitiveBase,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationPrimitiveBase")
		.def_static("StaticClass", &UParticleModuleLocationPrimitiveBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
          ;
}