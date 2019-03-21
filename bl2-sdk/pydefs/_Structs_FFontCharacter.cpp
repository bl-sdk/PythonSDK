#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFontCharacter()
{
    class_< FFontCharacter >("FFontCharacter", no_init)
        .def_readwrite("StartU", &FFontCharacter::StartU)
        .def_readwrite("StartV", &FFontCharacter::StartV)
        .def_readwrite("USize", &FFontCharacter::USize)
        .def_readwrite("VSize", &FFontCharacter::VSize)
        .def_readwrite("TextureIndex", &FFontCharacter::TextureIndex)
        .def_readwrite("VerticalOffset", &FFontCharacter::VerticalOffset)
  ;
}