#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityOverLifetime()
{
    class_< UParticleModuleVelocityOverLifetime, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleVelocityOverLifetime", no_init)
        .def_readwrite("VelOverLife", &UParticleModuleVelocityOverLifetime::VelOverLife)
        .def("StaticClass", &UParticleModuleVelocityOverLifetime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}