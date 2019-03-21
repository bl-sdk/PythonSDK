#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxTornadoForceField()
{
    class_< ANxTornadoForceField, bases< ANxForceField >  , boost::noncopyable>("ANxTornadoForceField", no_init)
        .def_readwrite("RadialStrength", &ANxTornadoForceField::RadialStrength)
        .def_readwrite("RotationalStrength", &ANxTornadoForceField::RotationalStrength)
        .def_readwrite("LiftStrength", &ANxTornadoForceField::LiftStrength)
        .def_readwrite("ForceRadius", &ANxTornadoForceField::ForceRadius)
        .def_readwrite("ForceTopRadius", &ANxTornadoForceField::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &ANxTornadoForceField::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ANxTornadoForceField::EscapeVelocity)
        .def_readwrite("ForceHeight", &ANxTornadoForceField::ForceHeight)
        .def_readwrite("HeightOffset", &ANxTornadoForceField::HeightOffset)
        .def_readwrite("Kernel", &ANxTornadoForceField::Kernel)
        .def("StaticClass", &ANxTornadoForceField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}