#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxForceFieldTornadoComponent(py::module &m)
{
    py::class_< UNxForceFieldTornadoComponent,  UNxForceFieldComponent   >(m, "UNxForceFieldTornadoComponent")
        .def_readwrite("RadialStrength", &UNxForceFieldTornadoComponent::RadialStrength)
        .def_readwrite("RotationalStrength", &UNxForceFieldTornadoComponent::RotationalStrength)
        .def_readwrite("LiftStrength", &UNxForceFieldTornadoComponent::LiftStrength)
        .def_readwrite("ForceRadius", &UNxForceFieldTornadoComponent::ForceRadius)
        .def_readwrite("ForceTopRadius", &UNxForceFieldTornadoComponent::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &UNxForceFieldTornadoComponent::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &UNxForceFieldTornadoComponent::EscapeVelocity)
        .def_readwrite("ForceHeight", &UNxForceFieldTornadoComponent::ForceHeight)
        .def_readwrite("HeightOffset", &UNxForceFieldTornadoComponent::HeightOffset)
        .def_readwrite("SelfRotationStrength", &UNxForceFieldTornadoComponent::SelfRotationStrength)
        .def_readwrite("Kernel", &UNxForceFieldTornadoComponent::Kernel)
          ;
}