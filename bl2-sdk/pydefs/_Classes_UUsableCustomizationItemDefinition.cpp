#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUsableCustomizationItemDefinition()
{
    class_< UUsableCustomizationItemDefinition, bases< UUsableItemDefinition >  , boost::noncopyable>("UUsableCustomizationItemDefinition", no_init)
        .def_readwrite("OverridePool", &UUsableCustomizationItemDefinition::OverridePool)
        .def_readwrite("CustomizationDef", &UUsableCustomizationItemDefinition::CustomizationDef)
        .def_readwrite("PrimaryColor", &UUsableCustomizationItemDefinition::PrimaryColor)
        .def_readwrite("SecondaryColor", &UUsableCustomizationItemDefinition::SecondaryColor)
        .def_readwrite("TertiaryColor", &UUsableCustomizationItemDefinition::TertiaryColor)
        .def_readwrite("ItemCardTopStatString", &UUsableCustomizationItemDefinition::ItemCardTopStatString)
        .def("StaticClass", &UUsableCustomizationItemDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCustomizationDefinitionToUnlock", &UUsableCustomizationItemDefinition::GetCustomizationDefinitionToUnlock, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}