#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundNodeWave()
{
    py::class_< USoundNodeWave,  USoundNode   >("USoundNodeWave")
        .def_readwrite("CompressionQuality", &USoundNodeWave::CompressionQuality)
        .def_readwrite("TTSSpeaker", &USoundNodeWave::TTSSpeaker)
        .def_readwrite("DecompressionType", &USoundNodeWave::DecompressionType)
        .def_readwrite("SpokenText", &USoundNodeWave::SpokenText)
        .def_readwrite("Volume", &USoundNodeWave::Volume)
        .def_readwrite("Pitch", &USoundNodeWave::Pitch)
        .def_readwrite("Duration", &USoundNodeWave::Duration)
        .def_readwrite("NumChannels", &USoundNodeWave::NumChannels)
        .def_readwrite("SampleRate", &USoundNodeWave::SampleRate)
        .def_readwrite("RawData", &USoundNodeWave::RawData)
        .def_readwrite("VorbisDecompressor", &USoundNodeWave::VorbisDecompressor)
        .def_readwrite("RawPCMData", &USoundNodeWave::RawPCMData)
        .def_readwrite("RawPCMDataSize", &USoundNodeWave::RawPCMDataSize)
        .def_readwrite("CompressedPCData", &USoundNodeWave::CompressedPCData)
        .def_readwrite("CompressedXbox360Data", &USoundNodeWave::CompressedXbox360Data)
        .def_readwrite("CompressedPS3Data", &USoundNodeWave::CompressedPS3Data)
        .def_readwrite("ResourceID", &USoundNodeWave::ResourceID)
        .def_readwrite("ResourceSize", &USoundNodeWave::ResourceSize)
        .def_readwrite("ResourceData", &USoundNodeWave::ResourceData)
        .def_readwrite("Subtitles", &USoundNodeWave::Subtitles)
        .def_readwrite("LocalizedSubtitles", &USoundNodeWave::LocalizedSubtitles)
        .def("StaticClass", &USoundNodeWave::StaticClass, py::return_value_policy::reference)
        .def("eventGeneratePCMData", &USoundNodeWave::eventGeneratePCMData)
        .staticmethod("StaticClass")
  ;
}