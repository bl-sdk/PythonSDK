#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationGFxDefinition()
{
    class_< UVehicleSpawnStationGFxDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UVehicleSpawnStationGFxDefinition", no_init)
        .def_readwrite("SupportedTags", &UVehicleSpawnStationGFxDefinition::SupportedTags)
        .def_readwrite("RequiredTags", &UVehicleSpawnStationGFxDefinition::RequiredTags)
        .def_readwrite("PostProcessInterpolationTime", &UVehicleSpawnStationGFxDefinition::PostProcessInterpolationTime)
        .def_readwrite("PreviewMeshFOV", &UVehicleSpawnStationGFxDefinition::PreviewMeshFOV)
        .def_readwrite("PreviewMeshScale", &UVehicleSpawnStationGFxDefinition::PreviewMeshScale)
        .def_readwrite("IntroTime", &UVehicleSpawnStationGFxDefinition::IntroTime)
        .def_readonly("DefaultMeshRotation", &UVehicleSpawnStationGFxDefinition::DefaultMeshRotation)
        .def_readonly("MeshRotationSpeed", &UVehicleSpawnStationGFxDefinition::MeshRotationSpeed)
        .def_readonly("MeshOffset", &UVehicleSpawnStationGFxDefinition::MeshOffset)
        .def_readwrite("HeaderTextOverrideKey", &UVehicleSpawnStationGFxDefinition::HeaderTextOverrideKey)
        .def("StaticClass", &UVehicleSpawnStationGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}