#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCollisionActor(py::module &m)
{
    py::class_< UParticleModuleCollisionActor,  UParticleModuleCollision   >(m, "UParticleModuleCollisionActor")
		.def_static("StaticClass", &UParticleModuleCollisionActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ActorsToCollideWith", &UParticleModuleCollisionActor::ActorsToCollideWith)
          ;
}