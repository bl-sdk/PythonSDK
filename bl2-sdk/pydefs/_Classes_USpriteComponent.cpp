#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpriteComponent(py::module &m)
{
    py::class_< USpriteComponent,  UPrimitiveComponent   >(m, "USpriteComponent")
        .def_readwrite("Sprite", &USpriteComponent::Sprite)
        .def_readwrite("ScreenSize", &USpriteComponent::ScreenSize)
        .def_readwrite("U", &USpriteComponent::U)
        .def_readwrite("UL", &USpriteComponent::UL)
        .def_readwrite("V", &USpriteComponent::V)
        .def_readwrite("VL", &USpriteComponent::VL)
        .def("SetSpriteAndUV", &USpriteComponent::SetSpriteAndUV)
        .def("SetUV", &USpriteComponent::SetUV)
        .def("SetSprite", &USpriteComponent::SetSprite)
          ;
}