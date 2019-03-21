#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASpotLightToggleable()
{
    class_< ASpotLightToggleable, bases< AActor >  , boost::noncopyable>("ASpotLightToggleable", no_init)
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("StaticClass", &ASpotLightToggleable::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &ASpotLightToggleable::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ASpotLightToggleable::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ASpotLightToggleable::ShouldSaveForCheckpoint)
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}