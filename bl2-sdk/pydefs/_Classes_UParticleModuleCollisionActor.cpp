#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionActor()
{
    py::class_< UParticleModuleCollisionActor,  UParticleModuleCollision   >("UParticleModuleCollisionActor")
        .def_readwrite("ActorsToCollideWith", &UParticleModuleCollisionActor::ActorsToCollideWith)
        .def("StaticClass", &UParticleModuleCollisionActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}