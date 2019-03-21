#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolume(py::object m)
{
    py::class_< ALevelStreamingVolume,  AVolume   >(m, "ALevelStreamingVolume")
        .def_readwrite("StreamingLevels", &ALevelStreamingVolume::StreamingLevels)
        .def_readwrite("StreamingUsage", &ALevelStreamingVolume::StreamingUsage)
        .def_readwrite("Usage", &ALevelStreamingVolume::Usage)
        .def_readwrite("CurrentVisibility", &ALevelStreamingVolume::CurrentVisibility)
        .def_readwrite("TestVolumeDistance", &ALevelStreamingVolume::TestVolumeDistance)
        .def("StaticClass", &ALevelStreamingVolume::StaticClass, py::return_value_policy::reference)
        .def("ApplyCheckpointRecord", &ALevelStreamingVolume::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ALevelStreamingVolume::CreateCheckpointRecord)
        .def("OnToggle", &ALevelStreamingVolume::OnToggle)
          ;
}