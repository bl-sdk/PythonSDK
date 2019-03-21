#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEquipableItemDefinition()
{
    class_< UEquipableItemDefinition, bases< UItemDefinition >  , boost::noncopyable>("UEquipableItemDefinition", no_init)
        .def_readwrite("DamageTypeIcon", &UEquipableItemDefinition::DamageTypeIcon)
        .def_readwrite("EquipSounds", &UEquipableItemDefinition::EquipSounds)
        .def_readwrite("UnequipSounds", &UEquipableItemDefinition::UnequipSounds)
        .def("StaticClass", &UEquipableItemDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUnequipped", &UEquipableItemDefinition::OnUnequipped)
        .def("OnEquipped", &UEquipableItemDefinition::OnEquipped)
        .staticmethod("StaticClass")
  ;
}