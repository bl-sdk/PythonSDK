#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxTornadoForceField()
{
    py::class_< ANxTornadoForceField,  ANxForceField   >("ANxTornadoForceField")
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
        .def("StaticClass", &ANxTornadoForceField::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}