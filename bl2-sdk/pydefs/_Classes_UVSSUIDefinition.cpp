#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVSSUIDefinition()
{
    class_< UVSSUIDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UVSSUIDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicensableObject", &UVSSUIDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("VehicleFamily", &UVSSUIDefinition::VehicleFamily)
        .def_readwrite("VehicleName", &UVSSUIDefinition::VehicleName)
        .def_readwrite("PathToVSSDefinition", &UVSSUIDefinition::PathToVSSDefinition)
        .def_readwrite("PreferredOrdering", &UVSSUIDefinition::PreferredOrdering)
        .def_readwrite("EligibleUsage", &UVSSUIDefinition::EligibleUsage)
        .def_readwrite("SupportedTags", &UVSSUIDefinition::SupportedTags)
        .def_readwrite("RequiredTags", &UVSSUIDefinition::RequiredTags)
        .def_readwrite("VehicleMaterialBankIndex", &UVSSUIDefinition::VehicleMaterialBankIndex)
        .def_readwrite("VehiclePreviewFrame", &UVSSUIDefinition::VehiclePreviewFrame)
        .def_readwrite("VehiclePreviewClip", &UVSSUIDefinition::VehiclePreviewClip)
        .def_readwrite("RequiredMissionCompletionToUnlock", &UVSSUIDefinition::RequiredMissionCompletionToUnlock)
        .def_readwrite("DlcVehicleDef", &UVSSUIDefinition::DlcVehicleDef)
        .def("StaticClass", &UVSSUIDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetVehiclePreviewMoviePath", &UVSSUIDefinition::GetVehiclePreviewMoviePath)
        .def("GetDownloadableContentDefinition", &UVSSUIDefinition::GetDownloadableContentDefinition, return_value_policy< reference_existing_object >())
        .def("GetHumanReadableVehicleName", &UVSSUIDefinition::GetHumanReadableVehicleName)
        .staticmethod("StaticClass")
  ;
}