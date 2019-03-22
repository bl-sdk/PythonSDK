#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreaming(py::module &m)
{
    py::class_< ULevelStreaming,  UObject   >(m, "ULevelStreaming")
        .def_readwrite("PackageName", &ULevelStreaming::PackageName)
        .def_readwrite("LoadedLevel", &ULevelStreaming::LoadedLevel)
        .def_readwrite("Offset", &ULevelStreaming::Offset)
        .def_readwrite("OldOffset", &ULevelStreaming::OldOffset)
        .def_readwrite("DrawColor", &ULevelStreaming::DrawColor)
        .def_readwrite("EditorStreamingVolumes", &ULevelStreaming::EditorStreamingVolumes)
        .def_readwrite("MinTimeBetweenVolumeUnloadRequests", &ULevelStreaming::MinTimeBetweenVolumeUnloadRequests)
        .def_readwrite("LastVolumeUnloadRequestTime", &ULevelStreaming::LastVolumeUnloadRequestTime)
        .def_readwrite("Keywords", &ULevelStreaming::Keywords)
        .def_readwrite("EditorGridVolume", &ULevelStreaming::EditorGridVolume)
          ;
}