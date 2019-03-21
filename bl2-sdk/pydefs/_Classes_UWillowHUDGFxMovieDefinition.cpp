#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowHUDGFxMovieDefinition(py::object m)
{
    py::class_< UWillowHUDGFxMovieDefinition,  UWillowGFxMovie3DDefinition   >(m, "UWillowHUDGFxMovieDefinition")
        .def_readwrite("MinimapRadius", &UWillowHUDGFxMovieDefinition::MinimapRadius)
        .def_readwrite("MinimapRadiusInVehicle", &UWillowHUDGFxMovieDefinition::MinimapRadiusInVehicle)
        .def_readwrite("MinimapRadiusLerpTime", &UWillowHUDGFxMovieDefinition::MinimapRadiusLerpTime)
        .def_readwrite("AlphaForInWorldObjectives", &UWillowHUDGFxMovieDefinition::AlphaForInWorldObjectives)
        .def_readwrite("StatusFanfareTweenTime", &UWillowHUDGFxMovieDefinition::StatusFanfareTweenTime)
        .def_readwrite("WorldSpaceIconRangeIn", &UWillowHUDGFxMovieDefinition::WorldSpaceIconRangeIn)
        .def_readwrite("WorldSpaceIconRangeOut", &UWillowHUDGFxMovieDefinition::WorldSpaceIconRangeOut)
        .def_readwrite("WorldSpaceIconLerpTime", &UWillowHUDGFxMovieDefinition::WorldSpaceIconLerpTime)
        .def_readwrite("ObjFadeAlpha", &UWillowHUDGFxMovieDefinition::ObjFadeAlpha)
        .def_readwrite("ObjFadeScale", &UWillowHUDGFxMovieDefinition::ObjFadeScale)
        .def_readwrite("ObjFadeSpeed", &UWillowHUDGFxMovieDefinition::ObjFadeSpeed)
        .def_readwrite("OcclusionTestInterval", &UWillowHUDGFxMovieDefinition::OcclusionTestInterval)
        .def_readwrite("OcclusionAlpha", &UWillowHUDGFxMovieDefinition::OcclusionAlpha)
        .def_readwrite("ChallengePart1Time", &UWillowHUDGFxMovieDefinition::ChallengePart1Time)
        .def_readwrite("ChallengePart2Time", &UWillowHUDGFxMovieDefinition::ChallengePart2Time)
        .def_readwrite("NoLevelAllegiances", &UWillowHUDGFxMovieDefinition::NoLevelAllegiances)
        .def_readwrite("UsableFadeAllegiances", &UWillowHUDGFxMovieDefinition::UsableFadeAllegiances)
        .def_readwrite("RecordingObjectives", &UWillowHUDGFxMovieDefinition::RecordingObjectives)
        .def_readwrite("RecordingMaps", &UWillowHUDGFxMovieDefinition::RecordingMaps)
        .def_readwrite("ScaledElements", &UWillowHUDGFxMovieDefinition::ScaledElements)
        .def_readwrite("InjuredStringReplacements", &UWillowHUDGFxMovieDefinition::InjuredStringReplacements)
        .def("StaticClass", &UWillowHUDGFxMovieDefinition::StaticClass, py::return_value_policy::reference)
          ;
}