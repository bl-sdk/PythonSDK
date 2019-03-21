#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableItemSetDefinition()
{
    class_< UDownloadableItemSetDefinition, bases< UDownloadableContentDefinition >  , boost::noncopyable>("UDownloadableItemSetDefinition", no_init)
        .def_readwrite("DefaultAttributePresentation", &UDownloadableItemSetDefinition::DefaultAttributePresentation)
        .def_readwrite("ItemAttributePresentationOverride", &UDownloadableItemSetDefinition::ItemAttributePresentationOverride)
        .def_readwrite("ArtifactAttributePresentationOverride", &UDownloadableItemSetDefinition::ArtifactAttributePresentationOverride)
        .def_readwrite("ClassModAttributePresentationOverride", &UDownloadableItemSetDefinition::ClassModAttributePresentationOverride)
        .def_readwrite("GrenadeModAttributePresentationOverride", &UDownloadableItemSetDefinition::GrenadeModAttributePresentationOverride)
        .def_readwrite("ShieldAttributePresentationOverride", &UDownloadableItemSetDefinition::ShieldAttributePresentationOverride)
        .def_readwrite("WeaponAttributePresentationOverride", &UDownloadableItemSetDefinition::WeaponAttributePresentationOverride)
        .def("StaticClass", &UDownloadableItemSetDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDLCRestrictedMessage", &UDownloadableItemSetDefinition::GetDLCRestrictedMessage)
        .def("CanUse", &UDownloadableItemSetDefinition::CanUse)
        .staticmethod("StaticClass")
  ;
}