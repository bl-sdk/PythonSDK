#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowInventoryPartDefinition()
{
    class_< UWillowInventoryPartDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowInventoryPartDefinition", no_init)
        .def_readwrite("Material", &UWillowInventoryPartDefinition::Material)
        .def_readwrite("GestaltModeSkeletalMeshName", &UWillowInventoryPartDefinition::GestaltModeSkeletalMeshName)
        .def_readwrite("NongestaltSkeletalMesh", &UWillowInventoryPartDefinition::NongestaltSkeletalMesh)
        .def_readonly("AdditionalGestaltModeSkeletalMeshNames", &UWillowInventoryPartDefinition::AdditionalGestaltModeSkeletalMeshNames)
        .def_readwrite("AttributeSlotEffects", &UWillowInventoryPartDefinition::AttributeSlotEffects)
        .def_readwrite("AttributeSlotUpgrades", &UWillowInventoryPartDefinition::AttributeSlotUpgrades)
        .def_readwrite("MonetaryValueMod", &UWillowInventoryPartDefinition::MonetaryValueMod)
        .def_readwrite("Rarity", &UWillowInventoryPartDefinition::Rarity)
        .def_readwrite("MaterialVectorParameterValues", &UWillowInventoryPartDefinition::MaterialVectorParameterValues)
        .def("StaticClass", &UWillowInventoryPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyMaterialModifiers", &UWillowInventoryPartDefinition::ApplyMaterialModifiers)
        .def("GetSkeletalMesh", &UWillowInventoryPartDefinition::GetSkeletalMesh, return_value_policy< reference_existing_object >())
        .def("AddAdditionalGestaltMeshNames", &UWillowInventoryPartDefinition::AddAdditionalGestaltMeshNames)
        .def("GetSkeletalMeshName", &UWillowInventoryPartDefinition::GetSkeletalMeshName)
        .def("GetRarityLevel", &UWillowInventoryPartDefinition::GetRarityLevel)
        .staticmethod("StaticClass")
  ;
}