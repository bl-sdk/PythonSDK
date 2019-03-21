#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextureCoordinates()
{
    class_< FTextureCoordinates >("FTextureCoordinates", no_init)
        .def_readwrite("U", &FTextureCoordinates::U)
        .def_readwrite("V", &FTextureCoordinates::V)
        .def_readwrite("UL", &FTextureCoordinates::UL)
        .def_readwrite("VL", &FTextureCoordinates::VL)
  ;
}