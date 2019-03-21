#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextureRenderTargetCube()
{
    class_< UTextureRenderTargetCube, bases< UTextureRenderTarget >  , boost::noncopyable>("UTextureRenderTargetCube", no_init)
        .def_readwrite("SizeX", &UTextureRenderTargetCube::SizeX)
        .def_readwrite("Format", &UTextureRenderTargetCube::Format)
        .def("StaticClass", &UTextureRenderTargetCube::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}