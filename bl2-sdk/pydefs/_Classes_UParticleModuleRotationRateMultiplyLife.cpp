#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateMultiplyLife()
{
    class_< UParticleModuleRotationRateMultiplyLife, bases< UParticleModuleRotationRateBase >  , boost::noncopyable>("UParticleModuleRotationRateMultiplyLife", no_init)
        .def_readwrite("LifeMultiplier", &UParticleModuleRotationRateMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleRotationRateMultiplyLife::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}