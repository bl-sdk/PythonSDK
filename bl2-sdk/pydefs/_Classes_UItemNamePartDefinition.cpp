#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemNamePartDefinition()
{
    class_< UItemNamePartDefinition, bases< UWillowInventoryPartDefinition >  , boost::noncopyable>("UItemNamePartDefinition", no_init)
        .def_readwrite("PartName", &UItemNamePartDefinition::PartName)
        .def_readwrite("Expressions", &UItemNamePartDefinition::Expressions)
        .def_readwrite("MinExpLevelRequirement", &UItemNamePartDefinition::MinExpLevelRequirement)
        .def_readwrite("MaxExpLevelRequirement", &UItemNamePartDefinition::MaxExpLevelRequirement)
        .def_readwrite("Priority", &UItemNamePartDefinition::Priority)
        .def_readwrite("VfTable_IIBehaviorProvider", &UItemPartDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("PartType", &UItemPartDefinition::PartType)
        .def_readwrite("TitleList", &UItemPartDefinition::TitleList)
        .def_readwrite("PrefixList", &UItemPartDefinition::PrefixList)
        .def_readwrite("BehaviorProviderDefinition", &UItemPartDefinition::BehaviorProviderDefinition)
        .def_readwrite("ExternalAttributeEffects", &UItemPartDefinition::ExternalAttributeEffects)
        .def_readwrite("ItemAttributeEffects", &UItemPartDefinition::ItemAttributeEffects)
        .def_readwrite("ItemCardAttributes", &UItemPartDefinition::ItemCardAttributes)
        .def_readwrite("CustomPresentations", &UItemPartDefinition::CustomPresentations)
        .def("StaticClass", &UItemNamePartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnPickupDisassociated", &UItemPartDefinition::OnPickupDisassociated)
        .def("OnPickupAssociated", &UItemPartDefinition::OnPickupAssociated)
        .def("OnCreate", &UItemPartDefinition::OnCreate)
        .def("SetBehaviorProviderDefinition", &UItemPartDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UItemPartDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}