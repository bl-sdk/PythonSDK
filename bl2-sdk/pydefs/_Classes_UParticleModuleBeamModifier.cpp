#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamModifier()
{
    class_< UParticleModuleBeamModifier, bases< UParticleModuleBeamBase >  , boost::noncopyable>("UParticleModuleBeamModifier", no_init)
        .def_readwrite("ModifierType", &UParticleModuleBeamModifier::ModifierType)
        .def_readwrite("PositionOptions", &UParticleModuleBeamModifier::PositionOptions)
        .def_readwrite("Position", &UParticleModuleBeamModifier::Position)
        .def_readwrite("TangentOptions", &UParticleModuleBeamModifier::TangentOptions)
        .def_readwrite("Tangent", &UParticleModuleBeamModifier::Tangent)
        .def_readwrite("StrengthOptions", &UParticleModuleBeamModifier::StrengthOptions)
        .def_readwrite("Strength", &UParticleModuleBeamModifier::Strength)
        .def("StaticClass", &UParticleModuleBeamModifier::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}