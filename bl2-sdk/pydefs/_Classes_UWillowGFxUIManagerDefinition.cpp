#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxUIManagerDefinition()
{
    class_< UWillowGFxUIManagerDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowGFxUIManagerDefinition", no_init)
        .def_readonly("MeshTranslation", &UWillowGFxUIManagerDefinition::MeshTranslation)
        .def_readwrite("MeshRotation", &UWillowGFxUIManagerDefinition::MeshRotation)
        .def_readwrite("ViewOffsetClamp", &UWillowGFxUIManagerDefinition::ViewOffsetClamp)
        .def_readwrite("ViewOffsetScale", &UWillowGFxUIManagerDefinition::ViewOffsetScale)
        .def_readwrite("TextureParameterName", &UWillowGFxUIManagerDefinition::TextureParameterName)
        .def_readwrite("RenderTextureMode", &UWillowGFxUIManagerDefinition::RenderTextureMode)
        .def_readwrite("DialogBoxDefinition", &UWillowGFxUIManagerDefinition::DialogBoxDefinition)
        .def_readwrite("TrainingDialogBoxDefinition", &UWillowGFxUIManagerDefinition::TrainingDialogBoxDefinition)
        .def_readwrite("TrainingDialogBoxDefinition_NoPause", &UWillowGFxUIManagerDefinition::TrainingDialogBoxDefinition_NoPause)
        .def_readwrite("EditDialogBoxDefinition", &UWillowGFxUIManagerDefinition::EditDialogBoxDefinition)
        .def_readwrite("RenderTextureSize", &UWillowGFxUIManagerDefinition::RenderTextureSize)
        .def("StaticClass", &UWillowGFxUIManagerDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetTranslation", &UWillowGFxUIManagerDefinition::GetTranslation)
        .staticmethod("StaticClass")
  ;
}