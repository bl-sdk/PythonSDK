#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationDefinition(py::object m)
{
    py::class_< UCustomizationDefinition,  UGBXDefinition   >(m, "UCustomizationDefinition")
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
        .def("StaticClass", &UCustomizationDefinition::StaticClass, py::return_value_policy::reference)
        .def("PassesDLCUsageRestrictionsForUser", &UCustomizationDefinition::PassesDLCUsageRestrictionsForUser)
        .def("eventIsVehicleSkinCustomization", &UCustomizationDefinition::eventIsVehicleSkinCustomization)
        .def("eventIsCharacterSkinCustomization", &UCustomizationDefinition::eventIsCharacterSkinCustomization)
        .def("eventIsCharacterHeadCustomization", &UCustomizationDefinition::eventIsCharacterHeadCustomization)
        .def("MatchRequiredUsageFlags", &UCustomizationDefinition::MatchRequiredUsageFlags)
        .def("SortCustomizationList", &UCustomizationDefinition::SortCustomizationList)
        .def("GetDownloadableContentDefinition", &UCustomizationDefinition::GetDownloadableContentDefinition, py::return_value_policy::reference)
        .def("GetAvailableAndUnauthorizedCustomizationsForVehicle", &UCustomizationDefinition::GetAvailableAndUnauthorizedCustomizationsForVehicle)
        .def("GetAvailableAndUnauthorizedCustomizationsForPlayer", &UCustomizationDefinition::GetAvailableAndUnauthorizedCustomizationsForPlayer)
        .def("GetAvailableCustomizationsForVehicle", &UCustomizationDefinition::GetAvailableCustomizationsForVehicle)
        .def("GetAvailableCustomizationsForPlayer", &UCustomizationDefinition::GetAvailableCustomizationsForPlayer)
          ;
}