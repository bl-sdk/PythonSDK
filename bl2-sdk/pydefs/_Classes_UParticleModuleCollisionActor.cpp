#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionActor(py::module &m)
{
    py::class_< UParticleModuleCollisionActor,  UParticleModuleCollision   >(m, "UParticleModuleCollisionActor")
        .def_readwrite("ActorsToCollideWith", &UParticleModuleCollisionActor::ActorsToCollideWith)
          ;
}