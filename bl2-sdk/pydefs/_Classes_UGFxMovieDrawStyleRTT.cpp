#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleRTT(py::module &m)
{
    py::class_< UGFxMovieDrawStyleRTT,  UGFxMovieDrawStyle   >(m, "UGFxMovieDrawStyleRTT")
        .def_readwrite("TextureSize", &UGFxMovieDrawStyleRTT::TextureSize)
        .def_readwrite("RenderTextureMode", &UGFxMovieDrawStyleRTT::RenderTextureMode)
        .def("StaticClass", &UGFxMovieDrawStyleRTT::StaticClass, py::return_value_policy::reference)
          ;
}