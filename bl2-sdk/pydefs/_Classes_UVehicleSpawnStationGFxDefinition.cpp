#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationGFxDefinition()
{
    py::class_< UVehicleSpawnStationGFxDefinition,  UWillowGFxMovie3DDefinition   >("UVehicleSpawnStationGFxDefinition")
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
        .def("StaticClass", &UVehicleSpawnStationGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}