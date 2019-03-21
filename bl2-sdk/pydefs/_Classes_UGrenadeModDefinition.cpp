#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGrenadeModDefinition()
{
    class_< UGrenadeModDefinition, bases< UEquipableItemDefinition >  , boost::noncopyable>("UGrenadeModDefinition", no_init)
        .def_readwrite("DefaultProjectileDefinition", &UGrenadeModDefinition::DefaultProjectileDefinition)
        .def_readwrite("ProjectileBaseValues", &UGrenadeModDefinition::ProjectileBaseValues)
        .def_readwrite("SetProjectileSequenceState", &UGrenadeModDefinition::SetProjectileSequenceState)
        .def("StaticClass", &UGrenadeModDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetEquipmentLocation", &UGrenadeModDefinition::GetEquipmentLocation)
        .def("OnGrenadeKilledEnemy", &UGrenadeModDefinition::OnGrenadeKilledEnemy)
        .def("OnGrenadeKilledNeutral", &UGrenadeModDefinition::OnGrenadeKilledNeutral)
        .def("OnGrenadeDamagedNeutral", &UGrenadeModDefinition::OnGrenadeDamagedNeutral)
        .def("OnGrenadeDamagedFriendly", &UGrenadeModDefinition::OnGrenadeDamagedFriendly)
        .def("OnGrenadeDamagedEnemy", &UGrenadeModDefinition::OnGrenadeDamagedEnemy)
        .def("OnGrenadeExploded", &UGrenadeModDefinition::OnGrenadeExploded)
        .def("OnGrenadeSpawned", &UGrenadeModDefinition::OnGrenadeSpawned)
        .staticmethod("StaticClass")
  ;
}