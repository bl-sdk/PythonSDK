#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGrenadeModPartDefinition()
{
    py::class_< UGrenadeModPartDefinition,  UEquipableItemPartDefinition   >("UGrenadeModPartDefinition")
        .def_readwrite("CustomProjectileDefinition", &UGrenadeModPartDefinition::CustomProjectileDefinition)
        .def_readwrite("SetProjectileSequenceState", &UGrenadeModPartDefinition::SetProjectileSequenceState)
        .def_readwrite("FlashIconPartName", &UGrenadeModPartDefinition::FlashIconPartName)
        .def_readwrite("FlashIconPartTint", &UGrenadeModPartDefinition::FlashIconPartTint)
        .def("StaticClass", &UGrenadeModPartDefinition::StaticClass, py::return_value_policy::reference)
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