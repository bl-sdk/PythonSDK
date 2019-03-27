#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSourceTexture2DRegion(py::module &m)
{
    py::class_< FSourceTexture2DRegion >(m, "FSourceTexture2DRegion")
        .def_readwrite("OffsetX", &FSourceTexture2DRegion::OffsetX)
        .def_readwrite("OffsetY", &FSourceTexture2DRegion::OffsetY)
        .def_readwrite("SizeX", &FSourceTexture2DRegion::SizeX)
        .def_readwrite("SizeY", &FSourceTexture2DRegion::SizeY)
        .def_readwrite("Texture2D", &FSourceTexture2DRegion::Texture2D)
  ;
}