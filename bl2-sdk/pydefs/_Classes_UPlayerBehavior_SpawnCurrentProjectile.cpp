#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SpawnCurrentProjectile()
{
    class_< UPlayerBehavior_SpawnCurrentProjectile, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_SpawnCurrentProjectile", no_init)
        .def_readwrite("ProjectileToSpawn", &UPlayerBehavior_SpawnCurrentProjectile::ProjectileToSpawn)
        .def_readwrite("InstanceDataContext", &UPlayerBehavior_SpawnCurrentProjectile::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UPlayerBehavior_SpawnCurrentProjectile::SavedReferenceName)
        .def("StaticClass", &UPlayerBehavior_SpawnCurrentProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SpawnCurrentProjectile::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}