#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_CylindricalForceActor()
{
    class_< ARB_CylindricalForceActor, bases< ARigidBodyBase >  , boost::noncopyable>("ARB_CylindricalForceActor", no_init)
        .def_readwrite("RenderComponent", &ARB_CylindricalForceActor::RenderComponent)
        .def_readwrite("RadialStrength", &ARB_CylindricalForceActor::RadialStrength)
        .def_readwrite("RotationalStrength", &ARB_CylindricalForceActor::RotationalStrength)
        .def_readwrite("LiftStrength", &ARB_CylindricalForceActor::LiftStrength)
        .def_readwrite("LiftFalloffHeight", &ARB_CylindricalForceActor::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ARB_CylindricalForceActor::EscapeVelocity)
        .def_readwrite("ForceRadius", &ARB_CylindricalForceActor::ForceRadius)
        .def_readwrite("ForceTopRadius", &ARB_CylindricalForceActor::ForceTopRadius)
        .def_readwrite("ForceHeight", &ARB_CylindricalForceActor::ForceHeight)
        .def_readwrite("HeightOffset", &ARB_CylindricalForceActor::HeightOffset)
        .def_readwrite("CollideWithChannels", &ARB_CylindricalForceActor::CollideWithChannels)
        .def("StaticClass", &ARB_CylindricalForceActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ARB_CylindricalForceActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}