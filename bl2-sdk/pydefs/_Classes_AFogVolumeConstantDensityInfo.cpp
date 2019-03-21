#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFogVolumeConstantDensityInfo()
{
    class_< AFogVolumeConstantDensityInfo, bases< AInfo >  , boost::noncopyable>("AFogVolumeConstantDensityInfo", no_init)
        .def_readwrite("DensityComponent", &AFogVolumeDensityInfo::DensityComponent)
        .def_readwrite("AutomaticMeshComponent", &AFogVolumeDensityInfo::AutomaticMeshComponent)
        .def("StaticClass", &AFogVolumeConstantDensityInfo::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &AFogVolumeDensityInfo::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &AFogVolumeDensityInfo::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &AFogVolumeDensityInfo::ShouldSaveForCheckpoint)
        .def("OnToggle", &AFogVolumeDensityInfo::OnToggle)
        .def("eventReplicatedEvent", &AFogVolumeDensityInfo::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AFogVolumeDensityInfo::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}