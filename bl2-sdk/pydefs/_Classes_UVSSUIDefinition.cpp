#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVSSUIDefinition(py::module &m)
{
    py::class_< UVSSUIDefinition,  UGBXDefinition   >(m, "UVSSUIDefinition")
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
        .def("GetVehiclePreviewMoviePath", &UVSSUIDefinition::GetVehiclePreviewMoviePath)
        .def("GetDownloadableContentDefinition", &UVSSUIDefinition::GetDownloadableContentDefinition, py::return_value_policy::reference)
        .def("GetHumanReadableVehicleName", &UVSSUIDefinition::GetHumanReadableVehicleName)
          ;
}