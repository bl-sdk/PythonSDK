#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemInspectionGFxMovieDefinition(py::module &m)
{
    py::class_< UItemInspectionGFxMovieDefinition,  UWillowGFxMovie3DDefinition   >(m, "UItemInspectionGFxMovieDefinition")
        .def_readwrite("ItemFOV", &UItemInspectionGFxMovieDefinition::ItemFOV)
        .def_readwrite("ItemScale", &UItemInspectionGFxMovieDefinition::ItemScale)
        .def_readwrite("RotationSpeed", &UItemInspectionGFxMovieDefinition::RotationSpeed)
        .def_readwrite("ScaleSpeed", &UItemInspectionGFxMovieDefinition::ScaleSpeed)
        .def_readwrite("ScaleMin", &UItemInspectionGFxMovieDefinition::ScaleMin)
        .def_readwrite("ScaleMax", &UItemInspectionGFxMovieDefinition::ScaleMax)
        .def_readwrite("IntroTime", &UItemInspectionGFxMovieDefinition::IntroTime)
        .def_readwrite("IntroRotation", &UItemInspectionGFxMovieDefinition::IntroRotation)
        .def_readwrite("IntroRotationRandomness", &UItemInspectionGFxMovieDefinition::IntroRotationRandomness)
        .def_readwrite("IntroRotationAlphaPowerRandomness", &UItemInspectionGFxMovieDefinition::IntroRotationAlphaPowerRandomness)
        .def_readwrite("HeightThreshold", &UItemInspectionGFxMovieDefinition::HeightThreshold)
          ;
}