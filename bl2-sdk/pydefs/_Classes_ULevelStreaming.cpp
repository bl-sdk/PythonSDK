#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelStreaming()
{
    class_< ULevelStreaming, bases< UObject >  , boost::noncopyable>("ULevelStreaming", no_init)
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
        .def_readonly("GridPosition", &ULevelStreaming::GridPosition)
        .def("StaticClass", &ULevelStreaming::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}