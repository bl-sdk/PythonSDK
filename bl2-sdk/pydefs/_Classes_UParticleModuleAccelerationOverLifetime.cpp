#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationOverLifetime()
{
    class_< UParticleModuleAccelerationOverLifetime, bases< UParticleModuleAccelerationBase >  , boost::noncopyable>("UParticleModuleAccelerationOverLifetime", no_init)
        .def_readwrite("AccelOverLife", &UParticleModuleAccelerationOverLifetime::AccelOverLife)
        .def("StaticClass", &UParticleModuleAccelerationOverLifetime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}