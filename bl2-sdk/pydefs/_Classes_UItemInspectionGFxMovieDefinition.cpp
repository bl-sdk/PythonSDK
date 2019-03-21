#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemInspectionGFxMovieDefinition()
{
    class_< UItemInspectionGFxMovieDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UItemInspectionGFxMovieDefinition", no_init)
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
        .def("StaticClass", &UItemInspectionGFxMovieDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}