#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolume()
{
    class_< ALevelStreamingVolume, bases< AVolume >  , boost::noncopyable>("ALevelStreamingVolume", no_init)
        .def_readwrite("StreamingLevels", &ALevelStreamingVolume::StreamingLevels)
        .def_readwrite("StreamingUsage", &ALevelStreamingVolume::StreamingUsage)
        .def_readwrite("Usage", &ALevelStreamingVolume::Usage)
        .def_readwrite("CurrentVisibility", &ALevelStreamingVolume::CurrentVisibility)
        .def_readwrite("TestVolumeDistance", &ALevelStreamingVolume::TestVolumeDistance)
        .def("StaticClass", &ALevelStreamingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &ALevelStreamingVolume::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ALevelStreamingVolume::CreateCheckpointRecord)
        .def("OnToggle", &ALevelStreamingVolume::OnToggle)
        .staticmethod("StaticClass")
  ;
}