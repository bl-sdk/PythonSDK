#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSourceMovement()
{
    py::class_< UParticleModuleSourceMovement,  UParticleModuleLocationBase   >("UParticleModuleSourceMovement")
        .def_readwrite("SourceMovementScale", &UParticleModuleSourceMovement::SourceMovementScale)
        .def("StaticClass", &UParticleModuleSourceMovement::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}