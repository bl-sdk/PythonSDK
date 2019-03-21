#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldDefinition(py::object m)
{
    py::class_< UShieldDefinition,  UItemDefinition   >(m, "UShieldDefinition")
        .def_readwrite("ShieldType", &UShieldDefinition::ShieldType)
        .def_readwrite("ShieldPrimeMechanism", &UShieldDefinition::ShieldPrimeMechanism)
        .def_readwrite("ShieldTypeFlashFrameName", &UShieldDefinition::ShieldTypeFlashFrameName)
        .def_readwrite("PrimedFlashFrameName", &UShieldDefinition::PrimedFlashFrameName)
        .def_readwrite("ShieldPhysicalMaterial", &UShieldDefinition::ShieldPhysicalMaterial)
        .def_readwrite("DamageTypeIcon", &UEquipableItemDefinition::DamageTypeIcon)
        .def_readwrite("EquipSounds", &UEquipableItemDefinition::EquipSounds)
        .def_readwrite("UnequipSounds", &UEquipableItemDefinition::UnequipSounds)
        .def("StaticClass", &UShieldDefinition::StaticClass, py::return_value_policy::reference)
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
          ;
}