#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEquipableItemDefinition(py::module &m)
{
    py::class_< UEquipableItemDefinition,  UItemDefinition   >(m, "UEquipableItemDefinition")
        .def_readwrite("DamageTypeIcon", &UEquipableItemDefinition::DamageTypeIcon)
        .def_readwrite("EquipSounds", &UEquipableItemDefinition::EquipSounds)
        .def_readwrite("UnequipSounds", &UEquipableItemDefinition::UnequipSounds)
        .def("OnUnequipped", &UEquipableItemDefinition::OnUnequipped)
        .def("OnEquipped", &UEquipableItemDefinition::OnEquipped)
          ;
}