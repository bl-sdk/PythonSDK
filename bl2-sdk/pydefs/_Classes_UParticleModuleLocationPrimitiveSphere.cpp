#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveSphere(py::module &m)
{
    py::class_< UParticleModuleLocationPrimitiveSphere,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationPrimitiveSphere")
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveSphere::StartRadius)
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
        .def("StaticClass", &UParticleModuleLocationPrimitiveSphere::StaticClass, py::return_value_policy::reference)
          ;
}