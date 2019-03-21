#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationOverLifetime()
{
    class_< UParticleModuleRotationOverLifetime, bases< UParticleModuleRotationBase >  , boost::noncopyable>("UParticleModuleRotationOverLifetime", no_init)
        .def_readwrite("RotationOverLife", &UParticleModuleRotationOverLifetime::RotationOverLife)
        .def("StaticClass", &UParticleModuleRotationOverLifetime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}