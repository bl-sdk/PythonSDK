#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleFamilyDefinition()
{
    py::class_< UVehicleFamilyDefinition,  UGBXDefinition   >("UVehicleFamilyDefinition")
        .def_readwrite("VehicleUIDefinitions", &UVehicleFamilyDefinition::VehicleUIDefinitions)
        .def_readwrite("FamilyName", &UVehicleFamilyDefinition::FamilyName)
        .def_readwrite("VehiclePreviewClip", &UVehicleFamilyDefinition::VehiclePreviewClip)
        .def_readwrite("RequiredMissionCompletionToUnlock", &UVehicleFamilyDefinition::RequiredMissionCompletionToUnlock)
        .def_readwrite("SupportedTags", &UVehicleFamilyDefinition::SupportedTags)
        .def_readwrite("RequiredTags", &UVehicleFamilyDefinition::RequiredTags)
        .def("StaticClass", &UVehicleFamilyDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetVehiclePreviewMoviePath", &UVehicleFamilyDefinition::GetVehiclePreviewMoviePath)
        .staticmethod("StaticClass")
  ;
}