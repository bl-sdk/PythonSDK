#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureCoordinates()
{
    py::class_< FTextureCoordinates >("FTextureCoordinates")
        .def_readwrite("U", &FTextureCoordinates::U)
        .def_readwrite("V", &FTextureCoordinates::V)
        .def_readwrite("UL", &FTextureCoordinates::UL)
        .def_readwrite("VL", &FTextureCoordinates::VL)
  ;
}