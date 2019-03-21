#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateMultiplyLife()
{
    class_< UParticleModuleMeshRotationRateMultiplyLife, bases< UParticleModuleRotationRateBase >  , boost::noncopyable>("UParticleModuleMeshRotationRateMultiplyLife", no_init)
        .def_readwrite("LifeMultiplier", &UParticleModuleMeshRotationRateMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleMeshRotationRateMultiplyLife::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}