#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SpawnCurrentProjectile()
{
    py::class_< UPlayerBehavior_SpawnCurrentProjectile,  UPlayerBehaviorBase   >("UPlayerBehavior_SpawnCurrentProjectile")
        .def_readwrite("ProjectileToSpawn", &UPlayerBehavior_SpawnCurrentProjectile::ProjectileToSpawn)
        .def_readwrite("InstanceDataContext", &UPlayerBehavior_SpawnCurrentProjectile::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UPlayerBehavior_SpawnCurrentProjectile::SavedReferenceName)
        .def("StaticClass", &UPlayerBehavior_SpawnCurrentProjectile::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SpawnCurrentProjectile::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}