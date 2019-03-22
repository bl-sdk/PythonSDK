#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLightToggleable(py::module &m)
{
    py::class_< ASpotLightToggleable,  AActor   >(m, "ASpotLightToggleable")
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("ApplyCheckpointRecord", &ASpotLightToggleable::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ASpotLightToggleable::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ASpotLightToggleable::ShouldSaveForCheckpoint)
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
          ;
}