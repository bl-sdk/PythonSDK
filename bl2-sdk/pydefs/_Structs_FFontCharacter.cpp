#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFontCharacter()
{
    py::class_< FFontCharacter >("FFontCharacter")
        .def_readwrite("StartU", &FFontCharacter::StartU)
        .def_readwrite("StartV", &FFontCharacter::StartV)
        .def_readwrite("USize", &FFontCharacter::USize)
        .def_readwrite("VSize", &FFontCharacter::VSize)
        .def_readwrite("TextureIndex", &FFontCharacter::TextureIndex)
        .def_readwrite("VerticalOffset", &FFontCharacter::VerticalOffset)
  ;
}