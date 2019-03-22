#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxForceFieldCylindricalComponent(py::module &m)
{
    py::class_< UNxForceFieldCylindricalComponent,  UNxForceFieldComponent   >(m, "UNxForceFieldCylindricalComponent")
        .def_readwrite("RadialStrength", &UNxForceFieldCylindricalComponent::RadialStrength)
        .def_readwrite("RotationalStrength", &UNxForceFieldCylindricalComponent::RotationalStrength)
        .def_readwrite("LiftStrength", &UNxForceFieldCylindricalComponent::LiftStrength)
        .def_readwrite("ForceRadius", &UNxForceFieldCylindricalComponent::ForceRadius)
        .def_readwrite("ForceTopRadius", &UNxForceFieldCylindricalComponent::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &UNxForceFieldCylindricalComponent::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &UNxForceFieldCylindricalComponent::EscapeVelocity)
        .def_readwrite("ForceHeight", &UNxForceFieldCylindricalComponent::ForceHeight)
        .def_readwrite("HeightOffset", &UNxForceFieldCylindricalComponent::HeightOffset)
        .def_readwrite("Kernel", &UNxForceFieldCylindricalComponent::Kernel)
        .def("StaticClass", &UNxForceFieldCylindricalComponent::StaticClass, py::return_value_policy::reference)
          ;
}