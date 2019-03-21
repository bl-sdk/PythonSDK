#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpriteComponent()
{
    class_< USpriteComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("USpriteComponent", no_init)
        .def_readwrite("Sprite", &USpriteComponent::Sprite)
        .def_readwrite("ScreenSize", &USpriteComponent::ScreenSize)
        .def_readwrite("U", &USpriteComponent::U)
        .def_readwrite("UL", &USpriteComponent::UL)
        .def_readwrite("V", &USpriteComponent::V)
        .def_readwrite("VL", &USpriteComponent::VL)
        .def("StaticClass", &USpriteComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetSpriteAndUV", &USpriteComponent::SetSpriteAndUV)
        .def("SetUV", &USpriteComponent::SetUV)
        .def("SetSprite", &USpriteComponent::SetSprite)
        .staticmethod("StaticClass")
  ;
}