#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateOverLife()
{
    class_< UParticleModuleMeshRotationRateOverLife, bases< UParticleModuleRotationRateBase >  , boost::noncopyable>("UParticleModuleMeshRotationRateOverLife", no_init)
        .def_readwrite("RotRate", &UParticleModuleMeshRotationRateOverLife::RotRate)
        .def("StaticClass", &UParticleModuleMeshRotationRateOverLife::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}