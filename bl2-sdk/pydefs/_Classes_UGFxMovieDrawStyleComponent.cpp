#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleComponent(py::module &m)
{
    py::class_< UGFxMovieDrawStyleComponent,  UGFxMovieDrawStyle   >(m, "UGFxMovieDrawStyleComponent")
		.def_static("StaticClass", &UGFxMovieDrawStyleComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TextureSize", &UGFxMovieDrawStyleRTT::TextureSize)
        .def_readwrite("RenderTextureMode", &UGFxMovieDrawStyleRTT::RenderTextureMode)
          ;
}