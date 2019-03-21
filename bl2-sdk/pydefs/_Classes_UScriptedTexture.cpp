#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UScriptedTexture()
{
    class_< UScriptedTexture, bases< UTextureRenderTarget2D >  , boost::noncopyable>("UScriptedTexture", no_init)
        .def("StaticClass", &UScriptedTexture::StaticClass, return_value_policy< reference_existing_object >())
        .def("Render", &UScriptedTexture::Render)
        .staticmethod("StaticClass")
  ;
}