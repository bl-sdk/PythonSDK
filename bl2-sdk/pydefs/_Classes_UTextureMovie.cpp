#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextureMovie()
{
    class_< UTextureMovie, bases< UTexture >  , boost::noncopyable>("UTextureMovie", no_init)
        .def_readwrite("SizeX", &UTextureMovie::SizeX)
        .def_readwrite("SizeY", &UTextureMovie::SizeY)
        .def_readwrite("Format", &UTextureMovie::Format)
        .def_readwrite("AddressX", &UTextureMovie::AddressX)
        .def_readwrite("AddressY", &UTextureMovie::AddressY)
        .def_readwrite("MovieStreamSource", &UTextureMovie::MovieStreamSource)
        .def_readwrite("DecoderClass", &UTextureMovie::DecoderClass)
        .def_readwrite("Decoder", &UTextureMovie::Decoder)
        .def_readwrite("MovieName", &UTextureMovie::MovieName)
        .def_readwrite("Data", &UTextureMovie::Data)
        .def_readwrite("ReleaseCodecFence", &UTextureMovie::ReleaseCodecFence)
        .def("StaticClass", &UTextureMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("Stop", &UTextureMovie::Stop)
        .def("Pause", &UTextureMovie::Pause)
        .def("Play", &UTextureMovie::Play)
        .staticmethod("StaticClass")
  ;
}