#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExternalTexture(py::module &m)
{
    py::class_< FExternalTexture >(m, "FExternalTexture")
        .def_readwrite("Resource", &FExternalTexture::Resource)
        .def_readwrite("Texture", &FExternalTexture::Texture)
  ;
}