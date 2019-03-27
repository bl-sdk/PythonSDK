#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALight(py::module &m)
{
    py::class_< ALight,  AActor   >(m, "ALight")
		.def_static("StaticClass", &ALight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
          ;
}