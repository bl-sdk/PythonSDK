#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShieldDefinition()
{
    class_< UShieldDefinition, bases< UItemDefinition >  , boost::noncopyable>("UShieldDefinition", no_init)
        .def_readwrite("ShieldType", &UShieldDefinition::ShieldType)
        .def_readwrite("ShieldPrimeMechanism", &UShieldDefinition::ShieldPrimeMechanism)
        .def_readwrite("ShieldTypeFlashFrameName", &UShieldDefinition::ShieldTypeFlashFrameName)
        .def_readwrite("PrimedFlashFrameName", &UShieldDefinition::PrimedFlashFrameName)
        .def_readwrite("ShieldPhysicalMaterial", &UShieldDefinition::ShieldPhysicalMaterial)
        .def_readwrite("DamageTypeIcon", &UEquipableItemDefinition::DamageTypeIcon)
        .def_readwrite("EquipSounds", &UEquipableItemDefinition::EquipSounds)
        .def_readwrite("UnequipSounds", &UEquipableItemDefinition::UnequipSounds)
        .def("StaticClass", &UShieldDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetEquipmentLocation", &UShieldDefinition::GetEquipmentLocation)
        .def("OnDamageResistanceTypeChanged", &UShieldDefinition::OnDamageResistanceTypeChanged)
        .def("OnEffectTriggered", &UShieldDefinition::OnEffectTriggered)
        .def("OnShieldNowRegenerating", &UShieldDefinition::OnShieldNowRegenerating)
        .def("OnShieldNowDepletedAfterBeingFull", &UShieldDefinition::OnShieldNowDepletedAfterBeingFull)
        .def("OnShieldNowDepleted", &UShieldDefinition::OnShieldNowDepleted)
        .def("OnShieldNowFull", &UShieldDefinition::OnShieldNowFull)
        .def("OnShieldPrimed", &UShieldDefinition::OnShieldPrimed)
        .def("OnAmmoAbsorbed", &UShieldDefinition::OnAmmoAbsorbed)
        .def("OnUnequipped", &UEquipableItemDefinition::OnUnequipped)
        .def("OnEquipped", &UEquipableItemDefinition::OnEquipped)
        .staticmethod("StaticClass")
  ;
}