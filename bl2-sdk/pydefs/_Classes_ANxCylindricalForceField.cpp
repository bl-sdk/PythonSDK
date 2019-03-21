#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxCylindricalForceField()
{
    class_< ANxCylindricalForceField, bases< ANxForceField >  , boost::noncopyable>("ANxCylindricalForceField", no_init)
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
        .def("StaticClass", &ANxCylindricalForceField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}