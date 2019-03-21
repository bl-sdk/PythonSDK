#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxCylindricalForceField(py::object m)
{
    py::class_< ANxCylindricalForceField,  ANxForceField   >(m, "ANxCylindricalForceField")
        .def_readwrite("RadialStrength", &ANxCylindricalForceField::RadialStrength)
        .def_readwrite("RotationalStrength", &ANxCylindricalForceField::RotationalStrength)
        .def_readwrite("LiftStrength", &ANxCylindricalForceField::LiftStrength)
        .def_readwrite("ForceRadius", &ANxCylindricalForceField::ForceRadius)
        .def_readwrite("ForceTopRadius", &ANxCylindricalForceField::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &ANxCylindricalForceField::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ANxCylindricalForceField::EscapeVelocity)
        .def_readwrite("ForceHeight", &ANxCylindricalForceField::ForceHeight)
        .def_readwrite("HeightOffset", &ANxCylindricalForceField::HeightOffset)
        .def_readwrite("Kernel", &ANxCylindricalForceField::Kernel)
        .def("StaticClass", &ANxCylindricalForceField::StaticClass, py::return_value_policy::reference)
          ;
}