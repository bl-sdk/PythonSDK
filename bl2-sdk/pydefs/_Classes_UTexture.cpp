#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTexture()
{
    class_< UTexture, bases< USurface >  , boost::noncopyable>("UTexture", no_init)
        .def_readwrite("CompressionSettings", &UTexture::CompressionSettings)
        .def_readwrite("Filter", &UTexture::Filter)
        .def_readwrite("LODGroup", &UTexture::LODGroup)
        .def_readwrite("MipGenSettings", &UTexture::MipGenSettings)
        .def_readwrite("LODBias", &UTexture::LODBias)
        .def_readwrite("CachedCombinedLODBias", &UTexture::CachedCombinedLODBias)
        .def_readwrite("NumCinematicMipLevels", &UTexture::NumCinematicMipLevels)
        .def_readwrite("Resource", &UTexture::Resource)
        .def_readwrite("InternalFormatLODBias", &UTexture::InternalFormatLODBias)
        .def("StaticClass", &UTexture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}