#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGrenadeModPartDefinition()
{
    class_< UGrenadeModPartDefinition, bases< UEquipableItemPartDefinition >  , boost::noncopyable>("UGrenadeModPartDefinition", no_init)
        .def_readwrite("CustomProjectileDefinition", &UGrenadeModPartDefinition::CustomProjectileDefinition)
        .def_readwrite("SetProjectileSequenceState", &UGrenadeModPartDefinition::SetProjectileSequenceState)
        .def_readwrite("FlashIconPartName", &UGrenadeModPartDefinition::FlashIconPartName)
        .def_readwrite("FlashIconPartTint", &UGrenadeModPartDefinition::FlashIconPartTint)
        .def("StaticClass", &UGrenadeModPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnGrenadeKilledEnemy", &UGrenadeModPartDefinition::OnGrenadeKilledEnemy)
        .def("OnGrenadeKilledNeutral", &UGrenadeModPartDefinition::OnGrenadeKilledNeutral)
        .def("OnGrenadeDamagedNeutral", &UGrenadeModPartDefinition::OnGrenadeDamagedNeutral)
        .def("OnGrenadeDamagedFriendly", &UGrenadeModPartDefinition::OnGrenadeDamagedFriendly)
        .def("OnGrenadeDamagedEnemy", &UGrenadeModPartDefinition::OnGrenadeDamagedEnemy)
        .def("OnGrenadeExploded", &UGrenadeModPartDefinition::OnGrenadeExploded)
        .def("OnGrenadeSpawned", &UGrenadeModPartDefinition::OnGrenadeSpawned)
        .staticmethod("StaticClass")
  ;
}