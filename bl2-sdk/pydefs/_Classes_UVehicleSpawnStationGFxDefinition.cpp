#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationGFxDefinition(py::module &m)
{
    py::class_< UVehicleSpawnStationGFxDefinition,  UWillowGFxMovie3DDefinition   >(m, "UVehicleSpawnStationGFxDefinition")
		.def_static("StaticClass", &UVehicleSpawnStationGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SupportedTags", &UVehicleSpawnStationGFxDefinition::SupportedTags)
        .def_readwrite("RequiredTags", &UVehicleSpawnStationGFxDefinition::RequiredTags)
        .def_readwrite("PostProcessInterpolationTime", &UVehicleSpawnStationGFxDefinition::PostProcessInterpolationTime)
        .def_readwrite("PreviewMeshFOV", &UVehicleSpawnStationGFxDefinition::PreviewMeshFOV)
        .def_readwrite("PreviewMeshScale", &UVehicleSpawnStationGFxDefinition::PreviewMeshScale)
        .def_readwrite("IntroTime", &UVehicleSpawnStationGFxDefinition::IntroTime)
        .def_readwrite("HeaderTextOverrideKey", &UVehicleSpawnStationGFxDefinition::HeaderTextOverrideKey)
          ;
}