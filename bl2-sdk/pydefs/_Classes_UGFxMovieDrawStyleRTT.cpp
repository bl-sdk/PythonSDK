#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleRTT()
{
    class_< UGFxMovieDrawStyleRTT, bases< UGFxMovieDrawStyle >  , boost::noncopyable>("UGFxMovieDrawStyleRTT", no_init)
        .def_readwrite("TextureSize", &UGFxMovieDrawStyleRTT::TextureSize)
        .def_readwrite("RenderTextureMode", &UGFxMovieDrawStyleRTT::RenderTextureMode)
        .def("StaticClass", &UGFxMovieDrawStyleRTT::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}