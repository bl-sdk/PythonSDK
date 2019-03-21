#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleComponent()
{
    class_< UGFxMovieDrawStyleComponent, bases< UGFxMovieDrawStyle >  , boost::noncopyable>("UGFxMovieDrawStyleComponent", no_init)
        .def_readwrite("TextureSize", &UGFxMovieDrawStyleRTT::TextureSize)
        .def_readwrite("RenderTextureMode", &UGFxMovieDrawStyleRTT::RenderTextureMode)
        .def("StaticClass", &UGFxMovieDrawStyleComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}