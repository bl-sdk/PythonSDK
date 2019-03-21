#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNxForceFieldCylindricalComponent()
{
    class_< UNxForceFieldCylindricalComponent, bases< UNxForceFieldComponent >  , boost::noncopyable>("UNxForceFieldCylindricalComponent", no_init)
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
        .def("StaticClass", &UNxForceFieldCylindricalComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}