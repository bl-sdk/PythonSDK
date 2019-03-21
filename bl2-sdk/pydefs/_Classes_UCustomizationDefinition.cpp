#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationDefinition()
{
    class_< UCustomizationDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UCustomizationDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicensableObject", &UCustomizationDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("CustomizationName", &UCustomizationDefinition::CustomizationName)
        .def_readwrite("CustomizationType", &UCustomizationDefinition::CustomizationType)
        .def_readwrite("UsageFlags", &UCustomizationDefinition::UsageFlags)
        .def_readwrite("OtherUsageFlags", &UCustomizationDefinition::OtherUsageFlags)
        .def_readwrite("PackageName", &UCustomizationDefinition::PackageName)
        .def_readwrite("CustomizationDataName", &UCustomizationDefinition::CustomizationDataName)
        .def_readwrite("ProfileEntryID", &UCustomizationDefinition::ProfileEntryID)
        .def_readwrite("ProfileEntryIndex", &UCustomizationDefinition::ProfileEntryIndex)
        .def_readwrite("PrimarySort", &UCustomizationDefinition::PrimarySort)
        .def_readwrite("SecondarySort", &UCustomizationDefinition::SecondarySort)
        .def_readwrite("DlcCustomizationSetDef", &UCustomizationDefinition::DlcCustomizationSetDef)
        .def("StaticClass", &UCustomizationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("PassesDLCUsageRestrictionsForUser", &UCustomizationDefinition::PassesDLCUsageRestrictionsForUser)
        .def("eventIsVehicleSkinCustomization", &UCustomizationDefinition::eventIsVehicleSkinCustomization)
        .def("eventIsCharacterSkinCustomization", &UCustomizationDefinition::eventIsCharacterSkinCustomization)
        .def("eventIsCharacterHeadCustomization", &UCustomizationDefinition::eventIsCharacterHeadCustomization)
        .def("MatchRequiredUsageFlags", &UCustomizationDefinition::MatchRequiredUsageFlags)
        .def("SortCustomizationList", &UCustomizationDefinition::SortCustomizationList)
        .def("GetDownloadableContentDefinition", &UCustomizationDefinition::GetDownloadableContentDefinition, return_value_policy< reference_existing_object >())
        .def("GetAvailableAndUnauthorizedCustomizationsForVehicle", &UCustomizationDefinition::GetAvailableAndUnauthorizedCustomizationsForVehicle)
        .def("GetAvailableAndUnauthorizedCustomizationsForPlayer", &UCustomizationDefinition::GetAvailableAndUnauthorizedCustomizationsForPlayer)
        .def("GetAvailableCustomizationsForVehicle", &UCustomizationDefinition::GetAvailableCustomizationsForVehicle)
        .def("GetAvailableCustomizationsForPlayer", &UCustomizationDefinition::GetAvailableCustomizationsForPlayer)
        .staticmethod("StaticClass")
  ;
}