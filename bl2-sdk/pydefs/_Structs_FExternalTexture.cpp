#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExternalTexture()
{
    py::class_< FExternalTexture >("FExternalTexture")
        .def_readwrite("Resource", &FExternalTexture::Resource)
        .def_readwrite("Texture", &FExternalTexture::Texture)
  ;
}