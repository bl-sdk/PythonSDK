#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleFamilyDefinition()
{
    class_< UVehicleFamilyDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UVehicleFamilyDefinition", no_init)
        .def_readwrite("VehicleUIDefinitions", &UVehicleFamilyDefinition::VehicleUIDefinitions)
        .def_readwrite("FamilyName", &UVehicleFamilyDefinition::FamilyName)
        .def_readwrite("VehiclePreviewClip", &UVehicleFamilyDefinition::VehiclePreviewClip)
        .def_readwrite("RequiredMissionCompletionToUnlock", &UVehicleFamilyDefinition::RequiredMissionCompletionToUnlock)
        .def_readwrite("SupportedTags", &UVehicleFamilyDefinition::SupportedTags)
        .def_readwrite("RequiredTags", &UVehicleFamilyDefinition::RequiredTags)
        .def("StaticClass", &UVehicleFamilyDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetVehiclePreviewMoviePath", &UVehicleFamilyDefinition::GetVehiclePreviewMoviePath)
        .staticmethod("StaticClass")
  ;
}