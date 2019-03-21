#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureMovie()
{
    py::class_< UTextureMovie,  UTexture   >("UTextureMovie")
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
        .def("StaticClass", &UTextureMovie::StaticClass, py::return_value_policy::reference)
        .def("Stop", &UTextureMovie::Stop)
        .def("Pause", &UTextureMovie::Pause)
        .def("Play", &UTextureMovie::Play)
        .staticmethod("StaticClass")
  ;
}