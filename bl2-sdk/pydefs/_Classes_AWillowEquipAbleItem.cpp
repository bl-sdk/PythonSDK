#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEquipAbleItem(py::module &m)
{
    py::class_< AWillowEquipAbleItem, AWillowItem   >(m, "AWillowEquipAbleItem")
        .def("StaticClass", &AWillowEquipAbleItem::StaticClass, py::return_value_policy::reference)
        .def("CanBeUsedBy", &AWillowEquipAbleItem::CanBeUsedBy)
        .def("ItemEquipped", &AWillowEquipAbleItem::ItemEquipped)
        .def("ItemUnequipped", &AWillowEquipAbleItem::ItemUnequipped)
        .def("Unreadied", &AWillowEquipAbleItem::Unreadied)
        .def("Readied", &AWillowEquipAbleItem::Readied)
        .def("IsEquipped", &AWillowEquipAbleItem::IsEquipped)
        .def("ItemRemovedFromInvManager", &AWillowEquipAbleItem::ItemRemovedFromInvManager)
        .def("SetElementalFrame", &AWillowEquipAbleItem::SetElementalFrame)
        .def("ClientInitializeFromItemDefinition", &AWillowEquipAbleItem::ClientInitializeFromItemDefinition)
        .def("OnUnequipped", &AWillowEquipAbleItem::OnUnequipped)
        .def("OnEquipped", &AWillowEquipAbleItem::OnEquipped)
          ;
}