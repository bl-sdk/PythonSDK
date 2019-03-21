#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFogVolumeConstantDensityInfo(py::object m)
{
    py::class_< AFogVolumeConstantDensityInfo,  AInfo   >(m, "AFogVolumeConstantDensityInfo")
        .def_readwrite("DensityComponent", &AFogVolumeDensityInfo::DensityComponent)
        .def_readwrite("AutomaticMeshComponent", &AFogVolumeDensityInfo::AutomaticMeshComponent)
        .def("StaticClass", &AFogVolumeConstantDensityInfo::StaticClass, py::return_value_policy::reference)
        .def("ApplyCheckpointRecord", &AFogVolumeDensityInfo::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &AFogVolumeDensityInfo::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &AFogVolumeDensityInfo::ShouldSaveForCheckpoint)
        .def("OnToggle", &AFogVolumeDensityInfo::OnToggle)
        .def("eventReplicatedEvent", &AFogVolumeDensityInfo::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AFogVolumeDensityInfo::eventPostBeginPlay)
          ;
}