#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateBase()
{
    class_< UParticleModuleRotationRateBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleRotationRateBase", no_init)
        .def("StaticClass", &UParticleModuleRotationRateBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}