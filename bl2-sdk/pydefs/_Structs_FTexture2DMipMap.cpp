#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTexture2DMipMap(py::module &m)
{
    py::class_< FTexture2DMipMap >(m, "FTexture2DMipMap")
        .def_readwrite("Data", &FTexture2DMipMap::Data)
        .def_readwrite("SizeX", &FTexture2DMipMap::SizeX)
        .def_readwrite("SizeY", &FTexture2DMipMap::SizeY)
  ;
}