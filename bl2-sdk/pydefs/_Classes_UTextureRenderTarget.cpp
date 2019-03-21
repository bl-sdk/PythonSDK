#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextureRenderTarget()
{
    class_< UTextureRenderTarget, bases< UTexture >  , boost::noncopyable>("UTextureRenderTarget", no_init)
        .def_readwrite("TargetGamma", &UTextureRenderTarget::TargetGamma)
        .def("StaticClass", &UTextureRenderTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}