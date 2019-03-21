#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScriptedTexture(py::object m)
{
    py::class_< UScriptedTexture,  UTextureRenderTarget2D   >(m, "UScriptedTexture")
        .def("StaticClass", &UScriptedTexture::StaticClass, py::return_value_policy::reference)
        .def("Render", &UScriptedTexture::Render)
          ;
}