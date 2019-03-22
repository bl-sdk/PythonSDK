#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASpotLight(py::module &m)
{
    py::class_< ASpotLight,  AActor   >(m, "ASpotLight")
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("StaticClass", &ASpotLight::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
          ;
}