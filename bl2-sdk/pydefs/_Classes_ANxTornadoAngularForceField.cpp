#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoAngularForceField(py::module &m)
{
    py::class_< ANxTornadoAngularForceField,  ANxForceField   >(m, "ANxTornadoAngularForceField")
        .def_readwrite("RadialStrength", &ANxTornadoAngularForceField::RadialStrength)
        .def_readwrite("RotationalStrength", &ANxTornadoAngularForceField::RotationalStrength)
        .def_readwrite("LiftStrength", &ANxTornadoAngularForceField::LiftStrength)
        .def_readwrite("ForceRadius", &ANxTornadoAngularForceField::ForceRadius)
        .def_readwrite("ForceTopRadius", &ANxTornadoAngularForceField::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &ANxTornadoAngularForceField::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ANxTornadoAngularForceField::EscapeVelocity)
        .def_readwrite("ForceHeight", &ANxTornadoAngularForceField::ForceHeight)
        .def_readwrite("HeightOffset", &ANxTornadoAngularForceField::HeightOffset)
        .def_readwrite("SelfRotationStrength", &ANxTornadoAngularForceField::SelfRotationStrength)
        .def_readwrite("Kernel", &ANxTornadoAngularForceField::Kernel)
          ;
}