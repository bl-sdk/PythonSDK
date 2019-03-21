#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemNamePartDefinition(py::object m)
{
    py::class_< UItemNamePartDefinition,  UWillowInventoryPartDefinition   >(m, "UItemNamePartDefinition")
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
        .def("StaticClass", &UItemNamePartDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnPickupDisassociated", &UItemPartDefinition::OnPickupDisassociated)
        .def("OnPickupAssociated", &UItemPartDefinition::OnPickupAssociated)
        .def("OnCreate", &UItemPartDefinition::OnCreate)
        .def("SetBehaviorProviderDefinition", &UItemPartDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UItemPartDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}