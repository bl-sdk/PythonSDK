#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleComponent()
{
    py::class_< UGFxMovieDrawStyleComponent,  UGFxMovieDrawStyle   >("UGFxMovieDrawStyleComponent")
        .def_readwrite("TextureSize", &UGFxMovieDrawStyleRTT::TextureSize)
        .def_readwrite("RenderTextureMode", &UGFxMovieDrawStyleRTT::RenderTextureMode)
        .def("StaticClass", &UGFxMovieDrawStyleComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}