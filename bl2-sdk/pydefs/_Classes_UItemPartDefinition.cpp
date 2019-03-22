#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPartDefinition(py::module &m)
{
    py::class_< UItemPartDefinition,  UWillowInventoryPartDefinition   >(m, "UItemPartDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UItemPartDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("PartType", &UItemPartDefinition::PartType)
        .def_readwrite("TitleList", &UItemPartDefinition::TitleList)
        .def_readwrite("PrefixList", &UItemPartDefinition::PrefixList)
        .def_readwrite("BehaviorProviderDefinition", &UItemPartDefinition::BehaviorProviderDefinition)
        .def_readwrite("ExternalAttributeEffects", &UItemPartDefinition::ExternalAttributeEffects)
        .def_readwrite("ItemAttributeEffects", &UItemPartDefinition::ItemAttributeEffects)
        .def_readwrite("ItemCardAttributes", &UItemPartDefinition::ItemCardAttributes)
        .def_readwrite("CustomPresentations", &UItemPartDefinition::CustomPresentations)
        .def("OnPickupDisassociated", &UItemPartDefinition::OnPickupDisassociated)
        .def("OnPickupAssociated", &UItemPartDefinition::OnPickupAssociated)
        .def("OnCreate", &UItemPartDefinition::OnCreate)
        .def("SetBehaviorProviderDefinition", &UItemPartDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UItemPartDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}