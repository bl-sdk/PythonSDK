#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxForceFieldTornado()
{
    class_< ANxForceFieldTornado, bases< ANxForceField >  , boost::noncopyable>("ANxForceFieldTornado", no_init)
        .def_readwrite("Shape", &ANxForceFieldTornado::Shape)
        .def_readwrite("DrawComponent", &ANxForceFieldTornado::DrawComponent)
        .def_readwrite("RadialStrength", &ANxForceFieldTornado::RadialStrength)
        .def_readwrite("RotationalStrength", &ANxForceFieldTornado::RotationalStrength)
        .def_readwrite("LiftStrength", &ANxForceFieldTornado::LiftStrength)
        .def_readwrite("ForceRadius", &ANxForceFieldTornado::ForceRadius)
        .def_readwrite("ForceTopRadius", &ANxForceFieldTornado::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &ANxForceFieldTornado::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ANxForceFieldTornado::EscapeVelocity)
        .def_readwrite("ForceHeight", &ANxForceFieldTornado::ForceHeight)
        .def_readwrite("HeightOffset", &ANxForceFieldTornado::HeightOffset)
        .def_readwrite("SelfRotationStrength", &ANxForceFieldTornado::SelfRotationStrength)
        .def_readwrite("Kernel", &ANxForceFieldTornado::Kernel)
        .def("StaticClass", &ANxForceFieldTornado::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoInitRBPhys", &ANxForceFieldTornado::DoInitRBPhys)
        .staticmethod("StaticClass")
  ;
}