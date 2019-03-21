#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextureRenderTarget2D()
{
    class_< UTextureRenderTarget2D, bases< UTexture >  , boost::noncopyable>("UTextureRenderTarget2D", no_init)
        .def_readwrite("SizeX", &UTextureRenderTarget2D::SizeX)
        .def_readwrite("SizeY", &UTextureRenderTarget2D::SizeY)
        .def_readwrite("Format", &UTextureRenderTarget2D::Format)
        .def_readwrite("AddressX", &UTextureRenderTarget2D::AddressX)
        .def_readwrite("AddressY", &UTextureRenderTarget2D::AddressY)
        .def_readwrite("ClearColor", &UTextureRenderTarget2D::ClearColor)
        .def_readwrite("TargetGamma", &UTextureRenderTarget::TargetGamma)
        .def("StaticClass", &UTextureRenderTarget2D::StaticClass, return_value_policy< reference_existing_object >())
        .def("Create", &UTextureRenderTarget2D::Create, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}