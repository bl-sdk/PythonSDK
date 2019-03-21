#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExternalTexture()
{
    class_< FExternalTexture >("FExternalTexture", no_init)
        .def_readwrite("Resource", &FExternalTexture::Resource)
        .def_readwrite("Texture", &FExternalTexture::Texture)
  ;
}