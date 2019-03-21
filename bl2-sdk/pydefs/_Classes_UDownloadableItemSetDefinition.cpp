#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableItemSetDefinition(py::object m)
{
    py::class_< UDownloadableItemSetDefinition,  UDownloadableContentDefinition   >(m, "UDownloadableItemSetDefinition")
        .def_readwrite("DefaultAttributePresentation", &UDownloadableItemSetDefinition::DefaultAttributePresentation)
        .def_readwrite("ItemAttributePresentationOverride", &UDownloadableItemSetDefinition::ItemAttributePresentationOverride)
        .def_readwrite("ArtifactAttributePresentationOverride", &UDownloadableItemSetDefinition::ArtifactAttributePresentationOverride)
        .def_readwrite("ClassModAttributePresentationOverride", &UDownloadableItemSetDefinition::ClassModAttributePresentationOverride)
        .def_readwrite("GrenadeModAttributePresentationOverride", &UDownloadableItemSetDefinition::GrenadeModAttributePresentationOverride)
        .def_readwrite("ShieldAttributePresentationOverride", &UDownloadableItemSetDefinition::ShieldAttributePresentationOverride)
        .def_readwrite("WeaponAttributePresentationOverride", &UDownloadableItemSetDefinition::WeaponAttributePresentationOverride)
        .def("StaticClass", &UDownloadableItemSetDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDLCRestrictedMessage", &UDownloadableItemSetDefinition::GetDLCRestrictedMessage)
        .def("CanUse", &UDownloadableItemSetDefinition::CanUse)
          ;
}